/*
In UTF-8 encoding, each character from the Unicode table is encoded in one, two, three or four bytes, 
depending on its code. The number of bytes can be recognized by the oldest (very first) byte.
If the high bit of the high byte is zero, the character is encoded in one byte. 
Otherwise, at the beginning of the high byte there should be two, three or four ones (and after them - zero). 
This means that the character is encoded in two, three or four bytes, respectively. 
Given a set of bytes that are correct from the UTF-8 point of view, determine how many characters are encoded.
Input format
The input is a sequence of bytes (text encoded in UTF-8). You can read it in std::string. Text size does not exceed 1024 bytes.
Output format
Type one number: the number of encoded Unicode characters.
*/

#include <iostream>
#include <bitset>
#include <cstring>
#include <set>


int main() 
{
    std::string s;
    std::getline(std::cin, s);
    char c;
    int sum = 0;
    for(int i = 0; i < s.size(); i++)
    {
        c = s[i];
        std::bitset<sizeof(c) * 8> a = c;
        if(a[7] ==1  && a[6] == 0 ) sum--;
        sum++;
    }
    std::cout<<sum;
}
