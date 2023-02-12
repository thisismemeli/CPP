/*
Have you ever played the computer game "Minesweeper"? 
url https://en.wikipedia.org/wiki/Sapper_ (game) 
In this game, mines are placed on a rectangular field. 
You must clear the field. On each cell not occupied by a mine, it is written how many mines are located in the cells around it.
One student decided to write a class for his implementation of this game. 
The class should be able to create a rectangular field of the given sizes, put a "mine" in the specified cell (cell indices start from zero),
and also record in each free cell the number of mines around it. In addition, there should be an operator << that prints the field (and prints "stars" 
instead of mines). 
Unfortunately, the student code contains errors and does not pass the tests. Help him to fix and pass the program. 
Student code is available at https://clck.ru/AP2QQ.
Notes
Your solution should not contain main function. Your program will be built with this main function (approximately): https://clck.ru/ABQDY.
*/

#include <iostream>
#include <vector>

using std::vector;

class Minesweeper 
{
private:
    size_t M, N;
    vector<vector<int>> Table;

public:
    Minesweeper(size_t m, size_t n): M(m), N(n)
    {
        Table = vector<vector<int>> (M, vector<int>(N, 0));
    }

    size_t Rows() const 
    {
        return M;
    }

    size_t Columns() const 
    {
        return N;
    }
    
    void SetMine(size_t i, size_t j) 
    {
        Table[i][j] = -1;
    }

    int operator () (size_t i, size_t j) const 
    {
        return Table[i][j];
    }

    void CheckForMinesAround() 
    {
        for (size_t i = 0; i != M; ++i)
            for (size_t j = 0; j != N; ++j)
            if(Table[i][j] > -1)
                CheckForMinesAround(i, j);
    }

private:
    void CheckForMinesAround(size_t i, size_t j) 
    {
        int counter = 0;
        for (int dx = -1; dx <= 1; ++dx) {
            for (int dy = -1; dy <= 1; ++dy)
                if (0 <= i + dx && i + dx < M &&
                    0 <= j + dy && j + dy < N &&
                    Table[i + dx][j + dy] == -1
                ) {
                    ++counter;
                }
        }
        Table[i][j] = counter;
    }
};

std::ostream& operator << (std::ostream& out, const Minesweeper& ms) 
{
    for (size_t i = 0; i != ms.Rows(); i++)
    {
        for (size_t j = 0; j != ms.Columns(); j++)
        {
            if (ms(i, j) == -1)
                out << '*';
            else
                out << ms(i, j);
        }
        out << "\n";
    }
    return out;
}
