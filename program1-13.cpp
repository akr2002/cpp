// Program to find whether two strings contain equal number of characters

#include <iostream>
#include <cstring>

int main()
{
	char string1[150], string2[150];
	std::cout << "Enter strings: ";
	std::cin.getline(string1, 150);
	std::cin.getline(string2, 150);
	if (strlen(string1) == strlen(string2))
		std::cout << "\nBoth strings contain equal number of characters\n";
	else std::cout << "\nBoth string contain different number of characters\n";
	return 0;
}

