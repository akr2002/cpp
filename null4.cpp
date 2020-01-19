#include <iostream>
int getNumbers()
{
    return 5;
    return 7;
}

int main()
{
    std::cout << getNumbers() << std::endl;
    std::cout << getNumbers() << std::endl;

    return 0;
}
