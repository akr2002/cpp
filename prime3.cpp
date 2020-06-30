#include <iostream>

int checkPrimeNumber(int);

int main()
{
	std::system("clear");

	int n;

	std::cout << "Enter a positive integer: ";
	std::cin >> n;

	if (checkPrimeNumber(n) == 0)
		std::cout << n << " is a prime number.";
	else
		std::cout << n << " is not a prime number.";

	std::cout << "\nPress Enter to exit...";

	std::cin.ignore();
	std::cin.get();

	return 0;
}

int checkPrimeNumber(int n)
{
	bool flag = false;

	for (int i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			flag = true;
			break;
		}
	}

	return flag;
}

