#include <iostream>

#include <bitset>


int main() 
{
  unsigned int a, b;
  std::cin >> a >> b;
  std::bitset < sizeof(int) * 8 > c = a;
  std::cout << c[b];

}
