// Write a program to read coordinates of two points and calculate the distance between them as per the following formula: 
// d = sqrt((x1 - x2)^2 + (y1 - y2)^2)
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
#include <cmath>

int main()
{
	float distance, x1, y1, x2, y2;
	std::cout << "Enter cooedinates (x y) of point 1: ";
	std::cin >> x1 >> y1;
	std::cout << "Enter coordinates (x y) of point 2: ";
	std::cin >> x2 >> y2;

	distance = sqrt((x1 - x1) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	std::cout << "The distance between (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is " << distance;

	return 0;
}

