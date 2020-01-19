#include <iostream>

int main()
{
    std::cout << "Welcome to Odd/Even checker!\n\n";

    std::cout << "Enter an integer: ";
    int n;
    std::cin >> n;

    if (n % 2 == 0)
        std::cout << n << " is an even number";
    else
        std::cout << n << " is an odd number";

    return 0;
}
