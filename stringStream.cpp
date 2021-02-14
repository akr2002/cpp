/* Formatting using string streams */

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

int main()
{
	std::vector<double> values;

	std::cout << "How many numbers do you want to enter? ";
	std::size_t nums {};
	std::cin >> nums;
	// FIXME remove range based for loop
	for (std::size_t num {}; num < nums; ++num)	// Stream in all 'num' inputs
	{
		double d {};
		std::cin >> d;
		values.push_back(d);
	}

	std::stringstream ss;	// Create a new string stream
	// FIXME remove range based for loop
	for (std::size_t num {}; num < nums; ++num)	// Use it to compose the requested string
	{
		ss << std::setprecision(4) << std::setw(7) << std::right << values.at(num);
		if ((num + 1) % 5 == 0) ss << std::endl;
	}

	std::string s { ss.str() };	// Extract the resulting string using the str() function
	std::cout << s << std::endl;

	return 0;
}

