#include <iostream>

int main()
{   int n = 1;
    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
            
        }
        std::cout << std::endl;
    }
    return 0;
}