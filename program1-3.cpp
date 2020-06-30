// Temperature-conversion program that gives the user the option of converting fahrenheit to celsius or celsius to fahrenheit and dpeending upon user's choice carries out the conversion. (To illustrate the 
// working of if-else statement).

#include <iostream>

int main()
{
	int choice;
	float temp, countemp;

	std::cout << "Temperature conversion menu\n"
		  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
		  << "\n1. Fahrenheit to Celsius\n"
		  << "2. Celsius to Fahrenheit\n"
		  << "Enter your choice: ";
	std::cin >> choice;

	if (choice == 1)
	{
		std::cout << "\nEnter temperature in Fahrenheit: ";
		std::cin >> temp;
		countemp = (temp - 32) / 1.8;
		std::cout << "The temperature in Celsius is " << countemp << "\n";
	}
	else
	{
		std::cout << "\nEnter temperature in Centigrade: ";
		std::cin >> temp;
		countemp = 1.8 * temp + 32;
		std::cout << "The temperature in Fahrenheit is " << countemp << "\n";
	}

	return 0;
}

