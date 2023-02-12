/*There are a total of m programming languages in the world. You have found a summary of n programmers, where it is written which languages each of them knows.
You want to know how many sets of programmers exist such that for any programming language in the set there is a programmer who knows it.
Input format

The first line contains two integers separated by a space: n, m (1 ≤ n, m ≤ 22) is the number of programmers and programming languages, respectively. The following n lines contain m numbers separated by spaces. In the i th line, the j -th number is 1 if the programmer of i knows the language of j, or 0 if he does not.
Output format

Output one integer - the number of sets of programmers who know all languages totally.*/

#include <iostream>
#include <vector>

int getBit(int bitm, int bit1)
{
    return (bitm >> bit1) & 1;
}

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> subsets(n, std::vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cin >> subsets[i][j];
        }
    }
    int count = 0;
    for (int bitm = 0; bitm < (1 << n); ++bitm)
    {
        bool isValid = true;
        for (int bitNum = 0; bitNum < m; ++bitNum)
        {
            int bit1 = 0;
            for (int setNum = 0; setNum < n; ++setNum)
            {
                if (getBit(bitm, setNum) == 1 && subsets[setNum][bitNum] == 1)
                {
                    bit1 = 1;
                    break;
                }
            }
            if (bit1 == 0)
            {
                isValid = false;
                break;
