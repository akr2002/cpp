#include <iostream>
#include <array>

int main(int argc, char** argv)
{
	auto input { std::stoi(argv[1]) };

	std::array num { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	if (input > 0 && input < 10)
		std::cout << num[input] << std::endl;
	else std::cout << "Greater than 9" << std::endl;

	return 0;
}
