#include <iostream>
#include <string>

inline std::string name(std::string first, std::string second)
{
	first = first + " " + second;
	return first;
}

int main(int argc, char** argv)
{
	std::string first;
	std::string second;

	std::cout << "Enter the first and second name: ";
	std::cin >> first >> second;

	std::cout << "The name of a person is: " << name(first, second) << std::endl;

	return 0;
}
