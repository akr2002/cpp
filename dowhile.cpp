#include <iostream>

int main()
{
    double i, n, s;
    i = 1;
    
    do
    {
        i + pow (++i, - 1);
    } while (i <= 10);

    std::cout << i;

    return 0;
    
}