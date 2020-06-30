#include <iostream>

int main()
{
    int i, j, k, l, m;
    for (i = 1; i <= 10; i++)
    {
        for (j = 9; j >= i; j--)
        {
            std::cout << "  ";
        }

        for (k = 1; k <= i; k++)
        {
            std::cout << k << " ";
        }

        for (l = 1, m = k - 1; l < i; l++)
        {
            std::cout << --m << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
