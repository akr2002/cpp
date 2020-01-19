#include <iostream>

int main()
{
    float num1, num2, num3, tempResult;
    char ch, op, op1, ans;

    std::cout << "Calculator\n\n";
    std::cout << "This is a simple calculator. The following operators are valid: + - * / \n" << std::endl;
    std::cout << "Enter the number for operations to be performed." << std::endl;

    operation1:

    std::cout << "1. Operations on two numbers" << std::endl;
    std::cout << "2. Operations on three numbers" << std::endl;
    std::cout << "Enter your choice (1/2): ";
    std::cin >> ch;
    std::cout << std::endl << std::endl;
    
    if (ch == '1')
    {
        std::cout << "User chose operation on two numbers. The syntax of operation on two numbers is as follows: " << std::endl;
        std::cout << "number operator number. For example: 3 + 7\n" << std::endl;
        
        std::cout << "Enter first number: ";
        std::cin >> num1;
        std::cout << "Enter operator: ";
        std::cin >> op;
        std::cout << "Enter second number: ";
        std::cin >> num2;
        std::cout << std::endl;

        switch (op)
        {
            case '+': std::cout << num1 << " + " << num2 << " = " << (num1 + num2) << std::endl; break;
            case '-': std::cout << num1 << " - " << num2 << " = " << (num1 - num2) << std::endl; break;
            case '*': std::cout << num1 << " * " << num2 << " = " << (num1 * num2) << std::endl; break;
            case '/': std::cout << num1 << " / " << num2 << " = " << (num1 / num2) << std::endl; break;
        }

        std::cout << "\nDo you wish to continue? (y/N): ";
        std::cin >> ans;
        std::cout << std::endl << std::endl;
        
        if (ans == 'Y' || ans == 'y')
            goto operation1;
        else 
            goto end;
    }

    if (ch == '2')
    {
        std::cout << "User chose operation on three numbers. The syntax of operation on three numbers is as follows: " << std::endl;
        std::cout << "number operator number operator number. For example: 3 + 7 / 8\n" << std::endl;

        std::cout << "Enter first number: ";
        std::cin >> num1;
        std::cout << "Enter operator: ";
        std::cin >> op;
        std::cout << "Enter second number: ";
        std::cin >> num2;
        std::cout << "Enter operator: ";
        std::cin >> op1;
        std::cout << "Enter third number: ";
        std::cin >> num3;
        std::cout << std::endl;

        switch (op)
        {
            case '+': tempResult = (num1 + num2); break;
            case '-': tempResult = (num1 - num2); break;
            case '*': tempResult = (num1 * num2); break;
            case '/': tempResult = (num1 / num2); break;
        }

        switch (op1)
        {
            case '+': std::cout << "(" << num1 << " " << op << " " << num2 << ") " << op1 << " " << num3 << " = " << (tempResult + num3) << std::endl; break;
            case '-': std::cout << "(" << num1 << " " << op << " " << num2 << ") " << op1 << " " << num3 << " = " << (tempResult - num3) << std::endl; break;
            case '*': std::cout << "(" << num1 << " " << op << " " << num2 << ") " << op1 << " " << num3 << " = " << (tempResult * num3) << std::endl; break;
            case '/': std::cout << "(" << num1 << " " << op << " " << num2 << ") " << op1 << " " << num3 << " = " << (tempResult / num3) << std::endl; break;
        }

        std::cout << "\nDo you wish to continue? (y/N): ";
        std::cin >> ans;
        std::cout << std::endl << std::endl;

        if (ans == 'Y' || ans == 'y')
            goto operation1;
        else
            goto end;
    }
    
    end:

    std::cout << "Thank you for using our calculator." << std::endl;
    std::cout << "Press any key to exit...";

    std::cin.ignore();
    std::cin.get();

    return 0;
}