// Passing an array to a function

#include <iostream>
#include <array>	// For std::size;

double average(double array[], std::size_t count_);	// Function prototype

int main()
{
	double values[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
	std::cout << "Average = " << average(values, std::size(values)) << std::endl;

	return 0;
}

// Function to compute an average

double average(double array[], std::size_t count)
{
	double sum {};	// Accumulate total in here
	for (std::size_t i {}; i < count; ++i)
		sum += array[i];	// Sum array elements
	return sum / count;	// Return average
}

