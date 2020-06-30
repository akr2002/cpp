// C++ Program to accept a number and find the sum of its digits

#include <iostream>

int main()
{
    int n, s = 0, p;

    std::cout << "Enter a number: ";
    std::cin >> n;

    while (n != 0)
    {
        p = n % 10;
        s = s + p;
        n = n / 10;
    }

    std::cout << "The sum of the entered digits is " << s << std::endl;

    return  0;
}
