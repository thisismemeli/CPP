/*Print the ASCII table for characters from 32 to 127. Your table should have 6 rows and 16 columns, 
as well as two headers: for rows and for columns. 
The initial column should be the most significant hexadecimal digit of the character code. 
The starting line must have a lower hexadecimal digit. Alphanumeric characters must be capitalized. 
Separate items on the same line with tab characters.
Notes
Your table should look something like this -
(only without the first two lines with control characters): https://clck.ru/AFtzU. 
Borders between cells do not need to be drawn.*/

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
