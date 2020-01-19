#include <iostream>

int main()
{
	std::system("clear");

	int n, num, digit, rev = 0;

	std::cout << "Enter a positive integer: ";
	std::cin >> num;

	n = num;

	while (num != 0)
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	}

	std::cout << "The reverse of the number is: " << rev << std::endl;

	if (n == rev)
		std::cout << "The number is a palindrome. " << std::endl;
	else
		std::cout << "The number is not a palindrome. " << std::endl;

	std::cout << "\nPress Enter to exit...";

	std::cin.ignore();
	std::cin.get();

	return 0;
}

