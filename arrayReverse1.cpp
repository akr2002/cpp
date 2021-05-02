#include <iostream>
#include <memory>

int main()
{
	std::size_t size {};
	std::cout << "Enter size of array: ";
	std::cin >> size;

	auto arr { std::make_shared<int[]>(size) };

	std::cout << "Enter array elements:\n";
	for (std::size_t i {}; i < size; ++i)
	{
		std::cout << i + 1 << ": ";
		std::cin >> arr[i];
	}

	for (std::size_t temp {}, start {}, end {size - 1}; start < end; ++start, --end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
	}

	std::cout << "Array in reverse order: ";
	for (std::size_t i {}; i < size; std::cout << arr[i++] << " ");
	std::cout << std::endl;

	return 0;
}
