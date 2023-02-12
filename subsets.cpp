/*
You are given a set of N lines.
Your task is to display all the subsets of a given set.
Input format
The first line of input contains a single integer n (1 ≤ n ≤ 20) - the number of elements of the set. 
In the next N lines there are lines consisting of letters of the Latin alphabet, long from 1 to 10 characters, one per line.
Output format
Print all subsets of the given set one by one per line. Output one subset in the format [<elem_1>, <elem_2>, <elem_3>].
Do not insert extra spaces. Output the subsets in the order in which they are listed in the input.
*/

#include <iostream>
#include <bitset>
#include <cstring>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<string> s(n);
    for(int  i = 0; i<n; i++)
    {
        cin>>s[i];
    }
    unsigned int x = 0;
    unsigned int y = 1 << n;
    while(x < y)
    {
        std::bitset<sizeof(x)*8> c = x;
        std::cout<<"[";
        bool p = false;
        for(int i = 0; i < n; i++)
        {
            if(c[i])
            {
                if(p)
                {
                    std::cout<<",";
                }
                p = true;
                std::cout<<s[i];
            }
        }
        std::cout<<"]\n";
        x++;
    }


}
