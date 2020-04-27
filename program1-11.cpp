// Program to read a string and print its length

#include <iostream>
#include <cstring>

int main()
{
	char astr[51];
	int length;
	std::cout << "Enter a string (max 50 characters): ";
	std::cin.getline(astr, 50);
	length = strlen(astr);
	std::cout << "\nThe length of the string is " << length << "\n";

	return 0;
}
