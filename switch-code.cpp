// Program to build a simple calculator using switch Statement

#include <iostream>

int main()
{
    std::cout << "Welcome to Simple Calculator!\n" << std::endl;

    char o;
    float num1, num2;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> o;

    std::cout << "Enter two operands: ";
    std::cin >> num1 >> num2;

    switch (o)
    {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            break;
        default:
            // operator doesn't match any case constant (+, -, *, /)
            std::cout << "Error! Operator is not correct";
            break;
    }

    return 0;
}