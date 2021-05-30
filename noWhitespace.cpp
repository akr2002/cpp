// The program uses a do-while loop to count the number of non-whitepaces entered in a line.
// The count ends when a first # character is found

#include <iostream>

int main(int argc, char** argv)
{
	std::size_t count {};
	std::size_t i {1};
	do
	{
		for (std::size_t j {0}; argv[i][j] != '\0'; ++count, ++j)
			if (argv[i][j] == '#')
				break;
		++i;
	}while (i < argc);

	std::cout << count << std::endl;

	return 0;
}
