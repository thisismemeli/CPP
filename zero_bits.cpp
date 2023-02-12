/*
Zero all bits except last n
Input format
integer A and n
Output format
print the resulting number after bit operation
*/

#include <iostream>

#include <bitset>

#include <cstring>

int main() 
{
  unsigned int a, b;
  std::cin >> a >> b;
  std::bitset < sizeof(int) * 8 > c = a;
  int i = b;
  while (i < sizeof(int) * 8) 
  {
    c[i] = 0;
    i++;
  }
  memcpy( & a, & c, sizeof(int));
  std::cout << a;

}
