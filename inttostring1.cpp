#include <iostream>
#include <map>
#include <string>

int main(int argc, char** argv)
{
	auto input { std::stoi(argv[1]) };

	std::map<std::string, int> number {
		{ "one",	1 },
		{ "two",	2 },
		{ "three",	3 },
		{ "four",	4 },
		{ "five",	5 },
		{ "six",	6 },
		{ "seven",	7 },
		{ "eight",	8 },
		{ "nine",	9 }
	};

	std::map<std::string, int>::iterator it = number.find(input);

	if (it != number.end())
		std::cout << it->second << std::endl;
	else std::cout << "Greater than 9" << std::endl;

	return 0;
}
