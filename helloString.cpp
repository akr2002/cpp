#include <iostream>
#include <cstring>

void name(char*);

int main()
{
	std::system("clear");

	char* user;

	name( user);

	std::cout << "\nPress any key to exit...";

	std::cin.ignore();
	std::cin.get();

	return 0;
}

void name(char* user)
{
	std::cout << "Enter your name to say hello to yourself: ";
	std::cin >> user;

	std:: cout << "Hello "  << name << std::endl;

	return ;
}
