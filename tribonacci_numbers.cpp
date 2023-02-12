/*
Tribonacci numbers are a sequence of integers, which is defined as follows:
the first, second and third numbers of Tribonacci are equal to one;
Each following Tribonacci number is equal to the sum of the three previous ones.
In general, almost like Fibonacci numbers.
Write a program that calculates Tribonacci numbers.
Input format
One natural number N (N <= 75) is entered.
Output format
The first N Tribonacci numbers are displayed.
*/

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
