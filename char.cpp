#include <iostream>

int main()
{
	char ch, ch1, ch2, ch3, ch4;
	std::cout << "Enter a character between A and V: ";
	std::cin >> ch;
	int num = ch;
	ch1 = ch + 1;
	ch2 = ch + 2;
	ch3 = ch + 3;
	ch4 = ch + 4;

	std::cout << "\nNext four characters are: ";
	std::cout << "\n" << ch1 << "\n" << ch2 << "\n" << ch3 << "\n" << ch4 << "\n" << "\a";
	return 0;
}

