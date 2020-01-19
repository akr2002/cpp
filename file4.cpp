#include <iostream>
#include <fstream>

int main()
{
	std::fstream file("file3.txt", std::ios::out);
	file << "Some text" << "\n" << "Some text 2.0";
	file.close();
	std::fstream file1("file3.txt", std::ios::in);
	file1.seekg(0, std::ios::end);
	unsigned long long i = file1.tellg();
	std::cout << "File size: " << i << "\n";
	char *text = new char[i+1];
	file1.seekg(0);
	file1.get(text, i);
	//file1 >> text;
	std::cout << text;
	file1.close();
	return 0;
}
