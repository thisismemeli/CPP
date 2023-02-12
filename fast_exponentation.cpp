/*Given two integers a and b. Calculate ab
Input format
The only input line contains the numbers a (1 ≤ a ≤ 109) and b (0 ≤ b ≤ 109).
Output format
Print one number - the answer to the problem. Since the answer can be very large, output the remainder of its division by 109 + 7.
Notes
Hint: you need to make solution that works faster than O(b). Standard exponentiation functions cannot be used. */

#include <iostream>

long long e = 1000000000+7;

long power(long long n, long long p)
{   
	n %= e;
    if (p == 0)
    {
        return 1;
    }
    if (p % 2 == 0)
    {
        return power(n * n, p / 2);
    }
    return n * (power(n, p - 1)%e);
}


int main()
{
    long long a;
    long long b;
    std::cin >> a >> b;
    std::cout << power(a, b) % e << std::endl;
    return 0;
}
