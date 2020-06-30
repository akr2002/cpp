// C++ program to ceck if the entered number is a prime number

#include <iostream>

int main()
{
	int n, i;
	bool isPrime = true;

	std::cout << "Enter a positive integer: ";
	std:: cin >> n;

	for (i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}

	if (isPrime)
		std::cout << "This is a prime number";
	else
		std::cout << "This is not a prime number";

	return 0;
}

