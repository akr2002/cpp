#include "box.h"
#include <iostream>

// CInstructor defintion
Box::Box(double lengthValue, double widthValue, double heightValue)
{
	std::cout << "Box constructor called." << std::endl;
	length = lengthValue;
	width = widthValue;
	height = heightValue;
}

// Function to calculate the volume of a box
double Box::volume()
{
	return length * width * height;
}

