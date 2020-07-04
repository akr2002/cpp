// Passing a two-dimensional array to a function

#include <iostream>
#include <array>	// for std::size()

double yield(const double values[][4], std::size_t n);

int main()
{
	double beans[3][4] {	{1.0,	2.0,	3.0,	4.0},
				{5.0,	6.0,	7.0,	8.0},
				{9.0, 	10.0,	11.0,	12.0}	};

	std::cout << "Yield = " << yield(beans, std::size(beans)) << std::endl;

	return 0;
}

// Function to compute total yield
double yield(const double array[][4], std::size_t size)
{
	double sum {};
	for (std::size_t i {}; i < size; ++i)
	{
		for (std::size_t j {}; j < 4; ++j)
		{
			sum += array[i][j];
		}
	}
	return sum;
}

