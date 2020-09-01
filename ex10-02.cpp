// Using externally defined variable

#include <iostream>
#include <iomanip>

double power(double x, int n);	// Declaration of an external power() function
int power_range;		// Not an unreasonable first attempt, right?

int main()
{
	for (int i {-power_range}; i <= power_range; ++i)	// Calculates powers of 8
		std::cout << std::setw(10) << power(8.0, i);

	std::cout << std::endl;
}
