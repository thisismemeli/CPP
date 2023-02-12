/*
Input format
Given integer x ().
Output format
Print number of 1 bits
*/

#include <iostream>

#include <bitset>


int main() 
{
  unsigned long a;
  std::cin >> a;
  std::bitset < sizeof(a) * 8 > c = a;
  int i = 0;
  int sum = 0;
  while (i < sizeof(a) * 8) 
  {
    if (c[i] != 0) sum++;
    i++;
  }
  std::cout << sum;

}
