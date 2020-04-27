// Program to read radius of a circle, calculate area, perimeter and display them

#include <iostream>

int main()
{
	float radius, area, perimeter;
	std::cout << "Enter radius of the circle: ";
	std::cin >> radius;

	perimeter = 2 * 3.14159 * radius;
	area = 3.14159 * radius * radius;

	std::cout << "The area of the circle is: ";
	std::cout << area;
	std::cout << "\nThe perimeter of the circle is: ";
	std::cout << perimeter;

	return 0;
}
