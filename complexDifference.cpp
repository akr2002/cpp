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

		Complex operator - (const Complex& c1)
		{
			if ((c1.real + c1.imag) > (this->real + this->imag))
			{
				throw std::runtime_error("Sum of real and imaginary parts of second complex number is greater than that of the first complex number");
			}

			Complex temp;
			temp.real = real - c1.real;
			temp.imag = imag - c1.imag;

			return temp;
		}

		friend std::ostream& operator << (std::ostream& out, const Complex& c1);
};

std::ostream& operator << (std::ostream& out, const Complex& c1)
{
	out << c1.real << (c1.imag < 0 ? " - " : " + ") << c1.imag << "i";

	return out;
}

int main(int argc, char** argv)
{
	if (argc != 5)
	{
		std::cerr << "Usage: complexDifference [real part] [imaginary part] [real part] [imaginary part]"
			<< "\nNote: The arguments must be of integer type." << std::endl;

		return -1;
	}

	Complex c1 { std::stoi(argv[1]), std::stoi(argv[2]) };
	Complex c2 { std::stoi(argv[3]), std::stoi(argv[4]) };

	try
	{
		Complex diff = c1 - c2;

		std::cout << "(" << c1 << ") - (" << c2 << ") = " << diff << std::endl;
	}

	catch (std::exception &e)
	{
		std::cerr << "EXCEPTION RAISED: " << e.what() << std::endl;
	}

	return 0;
}

