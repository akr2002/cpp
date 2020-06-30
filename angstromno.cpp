// C++ Program to check if the entered number is an Angstrom number

#include <iostream>
#include <math.h>

int main()
{
    int n, p, s = 0, c = 0, x, d;

    std::cout << "Enter a number: ";
    std::cin >> n;

    x = n;

    do 
    {
        p = n % 10;
        c++;        // Counts the number of digits and assigns to c
        n = n / 10;
    }
    while (n != 0);

    n = x;          // Restore the value of n

    do 
    {
        d = n % 10;
        s = s + pow (d, c);
        n = n / 10;
    }
    while (n != 0);

    if (s == x)
        std::cout << "User entered Angstrom number. " << std::endl;
    else 
        std::cout << "Not an Angstrom number." << std::endl;

    return 0;
}