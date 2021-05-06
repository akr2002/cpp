#include <iostream>
#include <fstream>

int main()
{
	char n;
	std::fstream file("int.txt", std::ios::out);

	for (int i {}; i < 5; ++i)
	{
		std::cout << "Enter a digit: ";
		std::cin >> n;
		file.put(n);
	}

	file.close();

	return 0;
}
