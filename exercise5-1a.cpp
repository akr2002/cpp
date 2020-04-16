// Exercise 5-1a. Write a program that outputs the squares of the odd integers 
// from 1 up to a limit that is entered by the user.

#include <iostream>

int main()
{
	std::size_t limit;
	std::cout << "This program outputs the squares of the odd integers from 1 up "
		<< "to a limit set by the user.\n"
		<< "Enter the limit: ";
	std::cin >> limit;

	for (std::size_t a {1}; a < limit; a = a + 2)
	{
		std::cout << a * a << "\t";
	}

	return 0;
}
