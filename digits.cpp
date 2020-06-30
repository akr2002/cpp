// C++ program to accept a number and display the said digit

#include <iostream>

int main()
{
    int n, d, p, c = 0;

    std::cout << "Enter a number along with the digit: " << std::endl;
    std::cin >> n >> d;

    do
    {
        p = n % 10;
        if (p == d)
            c++;
        n = n / 10;
    }

    while (n != 0);

    std::cout << d << " occurs " << c << " times";

    return 0;
}
