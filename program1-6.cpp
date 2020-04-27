// Program to input the number of a week's day (1-7) and translate to its equivalent name of the day of
// the week.

#include <iostream>

int main()
{
	int dow;
	std::cout << "Enter number of week's day (1-7): ";
	std::cin >> dow;

	switch (dow)
	{
		case 1: std::cout << "\nSunday";
			break;
		case 2: std::cout << "\nMonday";
			break;
		case 3: std::cout << "\nTuesday";
			break;
		case 4: std::cout << "\nWednesday";
			break;
		case 5: std::cout << "\nThursday";
			break;
		case 6: std::cout << "\nFriday";
			break;
		case 7: std::cout << "\nSaturday";
			break;
		default: std::cout << "\nInvalid day number.";
	}

	return 0;
}
