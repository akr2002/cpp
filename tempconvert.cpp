// Temperature-conversion program that gives the user the option of converting Fahrenheit to Celsius or Celsius to Fahrenheit and depending upon user's choice carries out the conversion.

#include <iostream>

int main()
{
	int choice;
	double temp, conv_temp;

	std::cout << "temperature Conversion Menu\n\n";
	std::cout << "1. Fahrenheit to Celsius\n";
	std::cout << "2. Celsius to Fahrenheit\n\n";
	std::cout << "Enter your choice (1/2): ";
	std::cin >> choice;

	if (choice == 1)
	{
		std::cout << "\nEnter the temperature in Fahrenheit: ";
		std::cin >> temp;
		conv_temp = (temp - 32) / 1.8;
		std::cout << "The temperature in Celsius is " << conv_temp << std::endl;;
	}
	else
	{
		std::cout << "\nEnter the temperature in Celsius: ";
		std::cin >> temp;
		conv_temp = (1.8 * temp) + 32;
		std::cout << "The temperature in Fahrenheit is " << conv_temp << "\n";
	}

	return 0;
}

