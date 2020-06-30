#include <fstream>

int main()
{
	std::fstream file("file2.dat", std::ios::app|std::ios::binary);
	for (int i = 0; i < 100; file << i++ << "\t");
	file << "\n";
	file.close();
	return 0;
}

