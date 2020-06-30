#include <iostream>
#include <math.h>

int main()
{
	double n, a, b;

	std::cout << "Enter a number: ";
	std::cin >> n;

	a = sqrt(n);
	b = a * a;

	if ( b == n )
		std::cout << n << " is a perfect square.";
	else

		std::cout << n << " is not a perfect square.";

	return 0;
}

