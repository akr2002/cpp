// C++ Program to find the largest number using nested if...else statement

#include <iostream>

int main()
{
    float n1, n2, n3;

    std::cout << "Enter three numbers: \n";
    std::cin >> n1 >> n2 >> n3;

    if (n1 >= n2)
    {
        if (n1 >= n3)
            std::cout << "Largest number: " << n1;
        else
            std::cout << "Largest number: " << n3;
    }
    else
    {
        if (n2 >= n3)
            std::cout << "Largest number: " << n2;
        else
            std::cout << "Largest number: " << n3;
    }

    return 0;
}
