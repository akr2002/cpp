#include <iostream>

int factorial(int);

int main()
{
	std::system("clear");

	int n;

	std::cout << "Enter a number to find the factorial: ";
	std::cin >> n;

	std::cout << "Factorial of " << n << " = " << factorial(n);

	std::cout << "\nPress Enter to exit...";

	std::cin.ignore();
	std::cin.get();

	return 0;
}

int factorial(int n)
{
	if (n > 1)
	{
		return n * factorial(n-1);
	}
	else
	{
		return 1;
	}
}

