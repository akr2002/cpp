#ifndef BOX_H
#define BOX_H

class Box
{
	private:
		double length {1.0};
		double width {1.0};
		double height {1.0};

	public:
		// Constructors
		Box(double lengthValue, double widthValue, double heightValue);
		Box() = default;

		double volume();	// Function to calculate the volume of a box
};

#endif

