#include <iostream>

int main()
{
    int n = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << n << " " ;
            n++;
        }
        std::cout << std::endl;
    }
    return 0;
}