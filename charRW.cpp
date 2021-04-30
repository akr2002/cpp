#include <iostream>
#include <fstream>
#include <cstdio>

int main()
{
	char c;
	std::fstream file ("file.txt", std::ios::trunc | std::ios::in | std::ios::out);

	std::clog << "Writing into file.txt...\n" << std::endl;

	while (scanf("%c", &c) != EOF)
	{
		file.put(c);
	}

	std::clog << "Finished writing into file.txt.\n" << std::endl;

	file.seekg(0, std::ios::beg);

	std::clog << "Reading into file.txt...\n" << std::endl;

	while (file)
	{
		c = file.get();
		std::cout << c;
	}

	std::clog << "Finished reading into file.txt.\n" << std::endl;

	file.close();

	return 0;
}
