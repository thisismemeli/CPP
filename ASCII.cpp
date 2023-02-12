#include <iostream>

int main()
{
    std::cout << "\t";
    for (int i = 0; i <= 9; i++)
        std::cout << i << '\t';
    for (char i = 'A'; i <= 'F'; i++)
        std::cout << i << '\t';
    int number = 32;
    for (int i = 2; i <= 7; i++)
    {
        std::cout << '\n' << i << '\t';
        for (int j = 0; j < 16; j++)
        {
            std::cout << (char)number << '\t';
            number++;
        }
    }
}
