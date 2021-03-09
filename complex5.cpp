// add two same complex number using copy ctor

#include <iostream>

class Complex
{
	private:
		int real {};
		int imag {};
	public:
		Complex();
		Complex(const int& r, const int& i);
		Complex(const Complex& c);
		void add(const Complex& c1, const Complex& c2);
		void display();
};

Complex::Complex() = default;

Complex::Complex(const int& r, const int& i) : real(r), imag(i)
{}

Complex::Complex(const Complex& c) : real(c.real), imag(c.imag)
{}

void Complex::add(const Complex& c1, const Complex& c2)
{
	real = c1.real + c2.real;
	imag = c1.imag + c2.imag;
}

void Complex::display()
{
	std::cout << "Sum is " << real << " + " << imag << "i" << std::endl;
}

int main()
{
	int r {}, i {};
	std::cout << "Enter real and imaginary parts separated by space: ";
	std::cin >> r >> i;
	Complex c1(r, i);
	Complex c2(c1);
	Complex c3;
	c3.add(c1, c2);
	c3.display();

	return 0;
}
