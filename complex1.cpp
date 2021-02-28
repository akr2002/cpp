#include <iostream>
#include <tuple>
#include <array>

class Complex
{
	private:
		// Using tuple because real and imaginary parts are always together in a complex number
		std::tuple<double, double> complex_no;
	public:
		void set(double real_no, double imag_no);
		void add(Complex c1, Complex c2);
		void display();
};

void Complex::set(double real_no, double imag_no)
{
	complex_no = std::make_tuple(real_no, imag_no);
}

void Complex::add(Complex c1, Complex c2)
{
	// Decomposing tuple into individual values
	auto [c1_r, c1_i] = c1.complex_no;
	auto [c2_r, c2_i] = c2.complex_no;
	auto real_sum = c1_r + c2_r;
	auto imag_sum = c1_i + c2_i;
	complex_no = std::make_tuple(real_sum, imag_sum);
}

void Complex::display()
{
	auto [real_no, imag_no] = complex_no;
	std::cout << "Sum is " << real_no << " + " << imag_no << "i\n";
}

int main()
{
	const std::size_t num {2};
	std::array<Complex, num> c;

	std::cout << "Enter real and imaginary values separated by space:\n";
	for (std::size_t i {}; i < 2; ++i)
	{
		double real_no {}, imag_no {};
		std::cout << i + 1 << ": ";
		std::cin >> real_no >> imag_no;
		c.at(i).set(real_no, imag_no);
	}

	Complex sum;
	sum.add(c.at(0), c.at(1));
	sum.display();
	
	return 0;
}

