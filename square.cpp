// The program takes a positive and prints squares of odd integers upto that number

#include <iostream>

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Enter a positive integer." << std::endl;
		return -1;
	}

	const auto limit { std::stoi(argv[1]) };

	for (int i {1}; i < limit; i += 2)
	{
		std::cout << i * i << " ";
	}
	std::cout << std::endl;

	return 0;
}
