// Using hybrid ctor

#include <iostream>

class Complex
{
	private:
		int real {};
		int imag {};
	public:
		Complex(const int& r, const int& i);
		Complex(const Complex& c);
		Complex(const Complex&, const int& i);
		inline void display();
};

Complex::Complex(const int& r, const int& i)
{
	std::cout << "Parametrized constructor called.\n";
	real = r;
	imag = i;
	display();
}

Complex::Complex(const Complex& c)
{
	std::cout << "Copy constructor called.\n";
	real = c.real;
	imag = c.imag;
	display();
}

Complex::Complex(const Complex& c, const int& i)
{
	std::cout << "Hybrid constructor called.\n";
	real = c.real;
	imag = i;
	display();
}

void Complex::display()
{
	std::cout << "The number is " << real << " + " << imag << "i" << std::endl;
}

int main()
{
	Complex c1(5, 7);
	Complex c2(c1);
	Complex c3(c1, 13);

	return 0;
}
