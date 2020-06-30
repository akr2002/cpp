// Exercise 5-3. Create a program that uses a do-while loop to count the number of nonwhitespace characters entered on a line.
// The count should end when the first # character is found.

#include <iostream>
#include <vector>

int main()
{
	std::cout << "This program counts the number of nonwhitespace characters entered on a line using a do-while loop.\n"
		<< "The count ends when the first # character is found.\n";

	std::string str;
	std::cout << "Enter a string: ";
	std::getline(std::cin, str);

	std::size_t s {}, nonwhitespace {};
	do
	{
		if (str.at(s++) != ' ')
			++nonwhitespace;
	}
	while (str.at(s) != '#') ;

	std::cout << "Number of nonwhitespace characters till #: " << nonwhitespace << "\n";

	return 0;
}

