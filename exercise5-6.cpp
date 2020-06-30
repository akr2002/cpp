// Exercise 5-6. Create a vector<> container with elements containing the 
// integers from 1 to an arbitrary upper bound entered by the user. Output the 
// elements from the vector that contains values that are not multiples of 7 or
// 13. Output them 10 on a line, aligned in columns.

#include <iostream>
#include <iomanip>
#include <vector>

int main()
{
	std::cout << "This program contains elements stored in a vector<> container from 1 to an arbitrary upper bound set by the user. The elements of the vecctor are printed that are not multiples of 7 or 13\n";

	std::vector<int> num;
	std::size_t uppBnd;	// upper bound
	std::cout << "Enter upper bound: ";
	std::cin >> uppBnd;
	
	// take integers from the user
	for (std::size_t s {}; s < uppBnd; ++s)
	{
		int temp;
		std::cout << "Entry " << s+1 << ": ";
		std::cin >> temp;
		num.push_back(temp);
	}

	std::cout << "\nOutput:\n";

	for (std::size_t s {}, colCount {}; s < uppBnd; ++s)
	{
		if (num.at(s) % 7 == 0 || num.at(s) % 13 == 0)
			continue;
		else
		{
			std::cout << num.at(s) << std::setw(5);
			++colCount;
			if (colCount % 10 == 0)
				std::cout << "\n";
		}
	}

	return 0;
}

