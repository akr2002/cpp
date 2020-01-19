#include <iostream>
#include <fstream>
int main()
{
	std::fstream file("file.dat", std::ios::out | std::ios::binary);
	file << "test1" << "\n" << "test2" << "\t" << "test3";
	file.close();
	return 0;
}

