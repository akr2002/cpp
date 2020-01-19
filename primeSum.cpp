#include <iostream>
#include <cstdlib>

bool primeCheck(int);

int main()
{
	std::system("clear");

	int num;

	std::cout << "C++ program to check if the entered number is a sum of two primes" << std::endl;
	std::cout << "\nEnter a positive integer: ";
	std::cin >> num;

	bool check = false;

	for (int i = 2; i <= num / 2; ++i)
	{
		if (primeCheck(i))
		{
			if (primeCheck(num - i))
			{
				std::cout << num << " = " <<  i << " + " << num - i << std::endl;
				check = true;
			}
		}
	}
	if (!check)
		std::cout << "The entered number cannot be expressed as a sum of two primes." << std::endl;

	std::cout << "Press any key to exit...";

	std::cin.ignore();
	std::cin.get();

	return 0;
}

bool primeCheck(int numCheck)
{
	bool prime = true;

	for (int i = 2; i <= numCheck / 2; ++i)
	{
		if (numCheck % i == 0)
		{
			prime = false;
			break;
		}
	}
	return prime;
}
