/*
Get bit at position i
Input format
Given integer numbers A and i
Output format
1 or 0
*/

#include <iostream>

#include <bitset>


int main() 
{
  unsigned int a, b;
  std::cin >> a >> b;
  std::bitset < sizeof(int) * 8 > c = a;
  std::cout << c[b];

}
