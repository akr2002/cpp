#include <iostream>

int main()
{
	int **arr, row, col;

	std::cout << "Enter row and columns: ";
	std::cin >> row >> col;

	arr = new int* [row];

	for (int i {}; i < row; ++i)
	{
		arr[i] = new int[col];
	}

	std::cout << "Enter array elements:\n";
	for (int i {}; i < row; ++i)
	{
		for (int j {}; j < col; ++j)
		{
			std::cout << "arr[" << i << "][" << j << "]: ";
			std::cin >> *(arr[i] + j);	
		}
	}

	std::cout << "\nThe array:\n";
	for (int i {}; i < row; ++i)
	{
		for (int j {}; j < col; ++j)
		{
			std::cout << *(arr[i] + j) << " ";
		}
		std::cout << "\n";
	}

	std::cout << std::endl;

	delete[] arr;

	return 0;
}
