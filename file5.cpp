#include <iostream>
#include <fstream>

int main()
{
	char ch;
	std::fstream file("ASCII.txt", std::ios::out | std::ios::app | std::ios::in);
	if (!file)
	{
		std::cout << "Could not open file\n";
		return -1;
	}
	for (int i = 0; i < 128; file.put((static_cast<char>(i++))));
	file.seekg(0);
	for (int i = 0; i < 128; ++i)
	{
		file.get(ch);
		std::cout << " " << i << " = " << ch << " ";
	}
	file.close();
	return 0;
}
