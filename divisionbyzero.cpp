#include <iostream>

int main(int argc, char** argv)
{
	if (argc != 3)
	{
		std::cout << "Usage: divisionbyzero [integer] [integer]" << std::endl;

		return -1;
	}

	int x { std::stoi(argv[1]) };
	int y { std::stoi(argv[2]) };

	try
	{
		if (y == 0)
			throw std::runtime_error("division by zero");

		std::cout << x << " / " << y << " = " << x / y << std::endl;
	}

	catch(const std::runtime_error &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}

	return 0;
}
