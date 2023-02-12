/*
Given a given number N, print all permutations of numbers from 1 to N in lexicographical order.
Input format
Given N (0 <N <10).
Output format
Display all permutations of numbers from 1 to N in lexicographical order. 
Permutations are output one per line, numbers in permutation are output without spaces.
*/

#include <iostream>
#include <algorithm>

int main() 
{
    std::string str;
    int q;
    std::cin >> q;
    for (int i = 0; i < q; i++) 
    {
        char c = i + '1';
        str += c;
    }
    std::cout << str << std::endl;
    while (next_permutation(str.begin(), str.end())) 
    {
        std::cout << str << std::endl;
    }
    return 0;
}
