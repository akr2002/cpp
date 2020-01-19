#include <iostream>

int main()
{
    for (int i = 65; i < 70; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            std::cout << (char)j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}