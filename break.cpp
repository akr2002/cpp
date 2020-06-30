// C++ Program to demonstrate working of break statement

#include <iostream>

int main()
{
    std::cout << "Enter 0.0 when done\n" << std::endl;
    float number, sum = 0.0;

    // test expression is always true
    while (true)
    {
        std::cout << "Enter a number: ";
        std::cin >> number;

        if (number != 0.0)
        {
            sum += number;
        }
        else
        {
            // terminates the loop if number equals 0.0
            break;
        }
    }
    std::cout << "Sum = " << sum << std::endl;

    return 0;
}