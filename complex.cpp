#include <iostream>

class Complex
{
	private:
		double real;
		double imag;	// imaginary is a keyword

	public:
		void get(double r, double i)
		{
			real = r;
			imag = i;
		}
		void add(Complex c1, Complex c2)
		{
			real = c1.real + c2.real;
			imag = c1.imag + c2.imag;
		}
		void display()
		{
			std::cout << real << " + i" << imag << std::endl;
		}
};

int main()
{
	double real, imag;
	Complex c1, c2, c3;
	std::cout << "Enter real and imaginary parts: ";
	std::cin >> real >> imag;
	c1.get(real, imag);
	std::cout << "Enter another: ";
	std::cin >> real >> imag;
	c2.get(real, imag);

	c3.add(c1, c2);

	std::cout << "Sum is ";
	c3.display();

	return 0;
}
