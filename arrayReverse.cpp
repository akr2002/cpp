#include <iostream>
#include <memory>

int main()
{
	std::size_t size {};
	std::cout << "Enter size of array: ";
	std::cin >> size;

	int *p = new int[size];

	std::cout << "Enter array elements:\n";
	for (std::size_t i {}; i < size; ++i)
	{
		std::cout << i + 1 << ": ";
		std::cin >> p[i];
	}

	int temp {};

	for (std::size_t start {}, end {size - 1}; start < end; ++start, --end)
	{
		temp = p[start];
		p[start] = p[end];
		p[end] = temp;
	}

	std::cout << "Array in reverse order: ";
	for (std::size_t i {}; i < size; std::cout << p[i++] << "  ");

	delete[] p;

	return 0;
}
