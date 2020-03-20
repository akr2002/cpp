// Bubble Sort

#include <iostream>
#include <vector>

int main()
{
	int n;
	short swap_check = 1;
	std::cout << "Enter the amount of numbers to sort: ";
	std::cin >> n;
	std::vector<int> numbers;
	std::cout << "Enter " << n << " numbers: ";
	int num;

	// Input
	for (int i = 0; i< n; ++i)
	{
		std::cin >> num;
		numbers.push_back(num);
	}

	// Bubble sorting
	for (int i = 0; (i < n) && (swap_check == 1); ++i)
	{
		swap_check = 0;
		for (int j = 0; j < n - 1; ++j)
		{
			if (numbers[j] > numbers[j + 1])
			{
				swap_check = 1;
				std::swap(numbers[j], numbers[j + 1]);
			}
		}
	}

	// Output
	std::cout << "\nSorted Array: ";
	for (int i = 0; i < numbers.size(); ++i)
	{
		if ( i != numbers.size() - 1)
		{
			std::cout << numbers[i] << ", ";
		}
		else
		{
			std::cout << numbers[i] << std::endl;
		}
	}
	return 0;
}

