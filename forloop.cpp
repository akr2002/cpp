// C++ Program to find factorial of a number
// Factorial of n = 1*2*3*...*n

#include <iostream>

int main()
{
    double i, n, factorial = 1;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    for (i = 1; i <= n; ++i)
    {
        factorial *= i;     // factorial = factorial * i;
    }

    std::cout << "Factorial of " << n << " = " << factorial;

    return 0;
}
