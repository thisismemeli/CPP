/*
All binary strings of length n containing exactly k ones
Given the numbers N and K (0 ≤ K ≤ N, 0 ≤ N ≤ 100), print all the lines of zeros and ones of length N,
containing exactly K ones, in lexicographical order.
It is guaranteed that the size of the answer does not exceed 10MiB.
*/

#include <iostream>
#include <algorithm>

int main() 
{
    std::string str;
    int n, k;
    std::cin >> n >> k;
    for (int i = 0; i < n - k; i++) 
    {
        char c = '0';
        str += c;
    }
    for (int i = 0; i < k; i++)
    {
        char c = '1';
        str += c;
    }
    std::cout << str << std::endl;

    while (next_permutation(str.begin(), str.end()))
    {
        std::cout << str << std::endl;
    }
    return 0;
}
