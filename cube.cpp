#include <iostream>
#include <stdlib.h>

float cube(float);	// Function cube's declaration
int main()
{
	system("cls");
	float num;
	std::cout << "Enter a number: ";
	std::cin >> num;
	std::cout << "\n" << "The cube of " << num << " is " << cube(num) << "\n";

	std::getchar();

	return 0;
}

float cube(float a)	// Fucntion cube's definition
{
	return a * a * a;
}

