// The program takes stores elements form 1 to upper bound in a vector<> container and prints the values that are not multiples of 7 or 13

#include <iostream>
#include <iomanip>
#include <vector>

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Enter a positive integer value" << std::endl;
		return -1;
	}

	auto limit { std::stoi(argv[1]) };
	std::vector<int> num {};

	for (int i {}, temp {}; i < limit; ++i)
	{
		std::cin >> temp;
		num.push_back(temp);
	}

	for (std::size_t i {}; const auto& n : num)
	{
		if (n % 7 == 0 || n % 13 == 0)
			continue;
		if (i % 10 == 0)
			std::cout << "\n";

		std::cout << std::setw(7) << std::left << n;
		++i;
	}

	std::cout << std::endl;

	return 0;
}
