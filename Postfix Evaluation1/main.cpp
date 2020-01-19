#include <iostream>
#include "Postfix.h"

int main()
{
	char expression[30];
	std::cout << "Enter postfix expression: ";
	std::cin.getline(expression, 30);
	Postfix postfix(expression);
	std::cout << "Result: " << postfix.result();
	return 0;
}