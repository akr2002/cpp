// The program initializes an array of first 50 odd numbers, prints them 10 to a line, similarly in reverse order, all using pointer notation

#include <iostream>

int main()
{
	int arr[50] {};

	for (int i {}, num {1}; i < 50; ++i, num+= 2)
	{
		*(arr + i) = num;
	}

	std::cout << "Array: ";
	for (int i {}; i < 50; std::cout << *(arr + i++) << " ");
	std::cout << "\nReverse: ";
	for (int i {49}; i > -1; std::cout << *(arr + i--) << " ");
	std::cout << std::endl;

	return 0;
}
