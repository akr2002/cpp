// user-defined copy ctor

#include <iostream>

class Complex
{
	private:
		int real;
		int imag;
	public:
		Complex(const int& r, const int& i);
		Complex(Complex& c1);
};

Complex::Complex(const int& r, const int& i) : real {r}, imag {i}
{}

Complex::Complex(Complex& c1) : real {c1.real}, imag {c1.imag}
{
	std::cout << "Copy constructor called.\n"
		<< "The number is " << real << " + " << imag << "i" << std::endl;
}

int main()
{
	Complex c1(5, 7);
	Complex c2(c1);

	return 0;
}
