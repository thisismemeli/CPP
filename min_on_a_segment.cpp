/*
Consider a sequence of integers of length n. The window with the length of k moves along it with step 1, that is, 
first in the window the first k numbers are visible,
the next step in the « window » will be k numbers, starting with the second, and so on until the end of the sequence. 
It is required for each position of the « window » to determine the minimum in it.
Input format
The first line of input contains two natural numbers n and k (n ≤ 150000, k ≤ 10000, k ≤ n) - 
the length of the sequence and « window », respectively. The next line contains n numbers - the sequence itself.
Output format
The output data must contain n - k + 1 lines - the minimum for each position of the « window ».
*/

#include <iostream>
#include <vector>
#include <set>
#include<queue>
#include <map>
#include <algorithm>

int main() 
{
    int n, k, b;
    std:: cin >> n >> k;
    std::multiset<int> a;
    std::queue<std::multiset<int>::iterator> p;
    for (int i = 0; i < k; i++)
    {
        std::cin >> b;
        p.push(a.insert(b));
    }
    std::cout<<*a.begin()<<std::endl;
    for (int i = k; i < n; i++)
    {
        std::cin>>b;
        a.erase(p.front());
        p.pop();
        p.push(a.insert(b));
        std::cout << *a.begin() << std::endl;
    }

    return 0;
}
