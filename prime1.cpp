#include <iostream>

int main()
{
	int n;

	std::cout << "Enter a number: ";
	std::cin >> n;

	if ( n % 2 == 0 )
		std::cout << n << " is an even number." << std::endl;
	else
		std::cout << n << " is an odd number." << std::endl;

	return 0;
}

