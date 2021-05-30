// The program takes a C-style string using std::cin.getline(), counts the number of characters using appropriate loop and prints them in reverse order.

#include <iostream>

int main()
{
	char str[1001] {};
	std::cout << "Enter a string (max. 1000 characters): ";
	std::cin.getline(str, 1000);

	int charCount {};
	while (str[charCount] != '\0')
		++charCount;

	std::cout << "Character count: " << charCount << std::endl;

	while (charCount > -1)
		std::cout << str[charCount--];

	std::cout << std::endl;

	return 0;
}
