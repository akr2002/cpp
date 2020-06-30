// Program to create the equivalent of a four-function calculator. The program requires the user to 
// enter two numbers and an operator. It then carries out the specified arithmetic operation: addition,
// subtraction, multiplication or division of the two numbers. Finally, it displays the result. (To 
// illustrate the working of a nested if statement).

#include <iostream>

int main()
{
	char ch;
	float a, b, result;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	std::cout << "Enter the operator (+, -, *, /): ";
	std::cin >> ch;

	if (ch == '+') result = a + b;
	else if (ch == '-') result = a - b;
	else if (ch == '*') result = a * b;
	else if (ch == '/') result = a / b;
	else {std::cout << "Invalid operator."; return -1;}

	std::cout << "The calculated result is " << result;

	return 0;
}

