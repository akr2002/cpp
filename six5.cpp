#include <iostream>

int mul(int, int);

int main()
{
	std::system("clear");

	int num1, num2, prod;

	std::cout << "This program multiplies two integers. Enter two integers " << std::endl;
	std::cin >> num1 >> num2;

	prod = mul(num1, num2);

	std::cout << num1 << " * " << num2 << " = " << prod << std::endl;

	std::cout << "\nPress any key to exit...";

	std::cin.ignore();
	std::cin.get();

	return 0;
}

int mul(int num1, int num2)
{
	int prod = num1 * num2;

	return prod;
}

