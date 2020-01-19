#include <iostream>

int main()
{
    int n = 65;

    for (int i = 65; i < 70; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            std::cout << (char)n << " ";
            n++;
        }
        std::cout << std::endl;
    }
    return 0;
}