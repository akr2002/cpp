#include <iostream>
#include <math.h>

int main()
{
	double n;

	std::cout << "Enter a number: ";
	std::cin >> n;

	if ( n < 0 )
		std::cout << n << " is a negative number." << std::endl;
	else 
		std::cout << "Square root of " << n << " is " << sqrt(n) << std::endl;

	return 0;
}

