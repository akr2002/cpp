// Program to read marks of 10 students and store them under an array

#include <iostream>

int main()
{
	float marks[50];

	for (int i = 0; i < 10; ++i)
	{
		std::cout << "\nEnter marks for student " << i + 1 << ": ";
		std::cin >> marks[i];
	}
	std::cout << "\n";
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "Marks of student " << i + 1 << ": " << marks[i] << "\n";
	}
	return 0;
}
