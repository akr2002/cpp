// Calling external functions

#include <iostream>
#include <iomanip>

double power(double x, int n);

int main()
{
    for (int i {-3}; i <= 3; ++i)
    {
        std::cout << std::setw(10) << power(8.0, i);

        std::cout << std::endl;
    }

    return 0;
}