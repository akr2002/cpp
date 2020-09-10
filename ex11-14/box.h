#ifndef BOX_H
#define BOX_H
#include <iostream>
#include <iomanip>

class Box
{
	private:
		double length {1.0};
		double width {1.0};
		double height {1.0};

	public:
		// Constructors
		Box(double lv, double wv, double hv) : length {lv}, width {wv}, height {hv} {} ;

		Box() = default;	// Default constructor

		double volume() const;	// Volume of a box
		{
			return length * width * height;
		}
}
