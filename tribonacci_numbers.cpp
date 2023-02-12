#include <iostream>

int main() 
{
    unsigned long fib1 = 1, fib2 = 1, fib3 = 1, input = 0, fib = 0;
    std::cin >> input;
        while (input > 0) 
        {
            std::cout << fib1 << " ";
            fib = fib1 + fib2 + fib3;
            fib1 = fib2;
            fib2 = fib3;
            fib3 = fib;
            input--;
        }
    return 0;
}
