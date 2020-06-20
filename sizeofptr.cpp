#include <iostream>

int main()
{
	std::cout << sizeof(double) << " > " << sizeof(char) << "\n";
	std::cout << sizeof(double*) << " == " << sizeof(char*) << "\n";
	return 0;
}
