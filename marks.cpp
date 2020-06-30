#include <iostream>

int main()
{
	std::system("clear");

	const int size = 50;
	float marks[size];

	for (int i = 0; i < size; ++i)
	{
		std::cout << "Enter marks of student " << i + 1 << std::endl;
		std::cin >> marks[i];
	}

	std::cout << std::endl;

	for (int i = 0; i < size; ++i)
	{
		std::cout << "Marks[" << i << "] = " << marks[i] << std::endl;
	}

	std::cout << "\nPress Enter to exit...";

	std::cin.ignore();
	std::cin.get();

	return 0;
}

