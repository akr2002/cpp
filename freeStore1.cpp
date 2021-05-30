// The program prints (1 / (n + 1)^2), each element stored in array alocated in free store using raw pointer.

#include <iostream>
#include <cmath>

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Enter a positive integer.\n";
		return -1;
	}

	const auto limit { std::stoi(argv[1]) };

	double *arr = new double[limit];
	double sum {};

	for (int i {}; i < limit; ++i)
	{
		*(arr + i) = (1 / std::pow(i + 1, 2));
		sum = 6 * (sum + *(arr + i));
	}

	std::cout << std::sqrt(sum) << std::endl;

	delete[] arr;

	return 0;
}
