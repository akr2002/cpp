// C++ Program to accept three integers and display the largest of the three

#include <iostream>

int main()
{
	int x, y, z, max;
	std::cout << "Enter three integers\n";
	std::cin >> x >> y >> z;
	max = x;
	if (y > max)
		max = y;
	if (z > max)
		max = z;
	std::cout << "The largest integer is " << max << std::endl;

	return 0;
}

