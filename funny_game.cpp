/*
Legendary mathematics teacher Yuri Petrovich came up with a fun game with numbers. 
Taking an arbitrary integer, he translates it into a binary number system, getting some sequence of zeros and ones starting with one. 
(For example, the decimal number is 19 10 = 1 ⋅ 24 + 0 ⋅ 23 + 0 ⋅ 22 + 1 ⋅ 21 + 1 ⋅ 20 in the binary system, it will be written as 100112.) 
Then the teacher begins to shift the digits of the received binary number in the cycle (so that the last digit becomes the first,
and all the rest are shifted one position to the right), writing out the resulting sequences of zeros and ones in the column - he noticed, 
that, regardless of the choice of the original number, the resulting sequences begin to repeat at some point. 
And finally, Yuri Petrovich looks for the maximum of the numbers written out and translates it back into the decimal number system, 
considering this number as the result of the manipulations. 
So, for number 19 the list of sequences will be as follows: 10011 11001 11100 01110 00111 10011 …
and the result of the game will therefore be the number 1 ⋅ 24 + 1 ⋅ 23 + 1 ⋅ 22 + 0 ⋅ 21 + 0 ⋅ 20 = 28. 
Since the invented game with numbers increasingly takes the imagination of the teacher, 
thereby diverting him from working with well-gifted schoolchildren, You are asked to 
write a program that would help Yuri Petrovich to get the result of the game without tedious manual calculations.
Input format
integer N ().
Output format
One number - the result of the game
*/

#include <iostream>
#include <bitset>
#include <set>

unsigned int rroll(unsigned int x, int n)
{
    unsigned int  y = x & 1;
    y = y << (n);
    x  = x >> 1;
    x  = x | y;
    return x;
}


int main() 
{
    unsigned int a;
    std::set<unsigned int> s;
    std::cin >> a;
 if(a == 0)
 	{
  std::cout<<0;
     return 0;
    }
    std::bitset<sizeof(int) * 8> c = a;
    int i = sizeof(int) * 8 - 1;
    while (c[i] == 0 && i > -1) i--;
    for (int j = 0; j <= i; j++) 
    {
        a = rroll(a, i);
        s.insert(a);
    }
    std::cout << *(--s.end());
}
