#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
	std::string filename { argv[1] };
	std::fstream file(filename, std::ios::in);
	std::string line;

	while (file)
	{
		std::getline(file, line);
		std::cout << line << "\n";
	}

	std::cout << std::endl;
	file.close();

	return 0;
}
