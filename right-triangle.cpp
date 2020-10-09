#include <iostream>

int main()
{
	int rows = 0;

	while (rows < 1)
	{
		std::cout << "Enter number of rows: ";
		std::cin >> rows;

		if (rows == 0)
		{
			std::cout << "Exiting program.\n";
			return -1;
		}

		else if (rows < 0)
		{
			std::cout << "Invalid value.\n";
		}
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			std::cout << "*";
		}

		std::cout << std::endl;
	}

	return 0;
}

