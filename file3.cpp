#include <iostream>
#include <fstream>

int main()
{
	std::fstream file("file2.dat", std::ios::in | std::ios::binary);
	file.seekg(0, std::ios::end);
	long long i = file.tellg();
	int *buff = new int[i+1];
	file.seekg(0);
	//file.get(buff, i);
	file >> buff;
	std::cout << buff << std::endl;
	file.close();
	return 0;
}

