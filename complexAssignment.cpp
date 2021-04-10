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

		Complex& operator = (const Complex& c1)
		{
			real = c1.real;
			imag = c1.imag;

			return *this;
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
	if (argc != 3)
	{
		std::cerr << "Usage: complexAssignment [real part] [imaginary part]"
			<< "\nNote: The arguments must be of integer type." << std::endl;

		return -1;
	}

	Complex c1 {std::stoi(argv[1]), std::stoi(argv[2])};
	Complex c2 = c1;

	std::cout << "c1 = " << c1
		<< "\nc2 = c1"
		<< "\nc2 = " << c2 << std::endl;

	return 0;
}
