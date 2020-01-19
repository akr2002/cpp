#include <iostream>

int main()
{
    int j;
    for (int i = 5; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            std::cout << " ";
        }
        for (int k = 1; k >= j; k++)
        {
            std::cout << "* ";
        }
        for (int l = 2; l >= j; l++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    return 0;
}