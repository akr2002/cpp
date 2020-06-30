#include <iostream>

int main()
{
    int x, p, c = 0, n;

    std::cout << "Enter a number: ";
    std::cin >> x;

     n = x;

    while (x != 0)
    {
        p = x % 10;
        x = x / 10;
        c++;
    }

    for (c; c != 0; c--)
    {
        
        std::cout << n % 10;
        n = n / 10;
    }

    return 0;
}