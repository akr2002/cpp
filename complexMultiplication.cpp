#include <iostream>

class Complex
{
	private:
		int real {};
		int imag {};

	public:
		Complex() = default;

		Complex(const int& r, const int& i) : real {r}, imag {i}
		{}

		inline Complex operator * (const Complex& c1) const
		{
			// (a + ib) * (c + id) = (ac - bd) + i(ad + bc)
			return Complex{(real * c1.real) + (-1 * (imag * c1.imag)), // real part
					(real * c1.imag + imag * c1.real)}; // imaginary part
		}

		friend std::ostream& operator << (std::ostream& out, const Complex& c1);
};

std::ostream& operator << (std::ostream& out, const Complex& c1)
{
	out << c1.real << " + " << c1.imag << "i";

	return out;
}

int main(int argc, char** argv)
{
	if (argc != 5)
	{
		std::cerr << "Usage: complexMultiplication [real part] [imaginary part] [real part] [imaginary part]"
			<< "\nNote: The arguments must be of integer type." << std::endl;

		return -1;
	}

	Complex c1 {std::stoi(argv[1]), std::stoi(argv[2])};
	Complex c2 {std::stoi(argv[3]), std::stoi(argv[4])};

	std::cout << "(" << c1 << ")"  << " * " << "(" << c2 << ")" << " = " << c1 * c2 << std::endl;

	return 0;
}

