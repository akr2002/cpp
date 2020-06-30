#include <iostream>
#include <math.h>

int main()
{
    double n, s, i = 1, k = 0;

    std::cout << "Enter range: ";
    std::cin >> n;

    while (i <= n)
    {
        s = s + (++k * pow((++i), -2));
    }

    std::cout << "Sum upto " << n << " is " << s << std::endl;

    return 0;
}
