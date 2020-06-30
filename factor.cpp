#include <iostream>

int main()
{
	std::system("clear");

	int n, i;

	std::cout << "Enter a positive integer: ";
	std::cin >> n;

	std::cout << "Factors of " << n << " are: " << std::endl;
	for (i = 1; i <= n; ++i)
	{
		if (n % i == 0)
			std::cout << i << std::endl;
	}

	std::cout << "\nPress Enter to exit...";

	std::cin.ignore();
	std::cin.get();

	return 0;
}

