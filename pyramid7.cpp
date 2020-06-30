#include <iostream>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int k = 9; k >= i; k--)
        {
            std::cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }

        for (int l = 1; l < i; l++)
        {
            std::cout << "* ";
        }

        std::cout << std::endl;
    }

    return 0;
}
