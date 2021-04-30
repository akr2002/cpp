#include <iostream>
#include <fstream>

int main()
{
	char ch;
	std::fstream file("sample.txt", std::ios::in | std::ios::out);

	file.seekg(-1, std::ios::end);

	std::size_t pos { file.tellg() };

	for (std::size_t i {}; i <= pos; ++i)
	{
		ch = file.get();
		std::cout << ch;
		file.seekg(-2, std::ios::cur);
	}

	file.close();

	return 0;
}
