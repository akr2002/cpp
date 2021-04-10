#include <iostream>

class Complex
{
	private:
		int real {};
		int imag {};

	public:
		Complex(const int& r, const int& i) : real {r}, imag {i}
		{}

		Complex() = default;

		// Pre decrement
		inline Complex& operator --()
		{
			--real;
			--imag;
			return *this;
		}

		// Post decrement
		inline const Complex operator --(int)
		{
			auto copy{*this};
			--(*this);
			return copy;
		}

		friend std::ostream& operator<<(std::ostream& out, const Complex& c1);

};

std::ostream& operator<<(std::ostream& out, const Complex& c1)
{
	out << c1.real << " + " << c1.imag << "i";

	return out;
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cerr << "Usage: complexDecrement [real part] [imaginary part]"
			<< "\nNote: The arguments must be of integer type." << std::endl;

		return -1;
	}

	Complex c1 {std::stoi(argv[1]), std::stoi(argv[2])};

	std::cout << "c1 = " << c1 
		<< "\nPre decrement: --c1 = " << --c1 
		<< "\nPost decrement: c1-- = " << c1--
		<< "\nc1 is now: " << c1 << std::endl;

	return 0;
}
