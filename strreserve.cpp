// Requests that the string capacity be adapted to a planned change in size to a length of up to n characters

#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::string str;

	std::ifstream file ("test.txt", std::ios::in | std::ios::ate);
	if (file)
	{
		std::ifstream::streampos filesize = file.tellg();
		str.reserve(filesize);

		file.seekg(0);
		while (!file.eof())
		{
			str += file.get();
		}
		std::cout << str;
	}

	return 0;
}

