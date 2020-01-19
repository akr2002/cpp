#include <iostream>
#include <ctype.h>

int main
()
{
	char ch;
	int a;
	std::cout << "Enter a character: ";
	std::cin >> ch;
	a = ch;
	if (isalnum(a))
	{
		std::cout << "\nAlphanumeric character\n";
		if (isdigit(a))
		{
			std::cout << "\nAnd Digit Character\n";
		}
		else if (isalpha(a))
		{
			std::cout << "\nAnd Alphabetic Character\n";
		}
	}
	else 
	{
		std::cout << "\nOther character\n";
	}

	std::cout << "\nPress any key to exit...";

	std::cin.ignore();
	std::cin.get();

	return 0;
}

