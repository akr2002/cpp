#include <iostream>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 4; k >= i; k--)
        {
            std::cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
