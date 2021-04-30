#include <iostream>
#include <fstream>

int main()
{
	std::fstream file("sample.txt", std::ios::in | std::ios::out);

	bool found {false};
	while (file)
	{
		if (file.get() == 'd')
		{
			found = true;
			std::cout << "first occurence of character 'd' found at: " << file.tellg() << std::endl;
			break;
		}
	}

	if (!found) std::cout << "no character 'd' in file." << std::endl;

	return 0;
}
