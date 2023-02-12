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
