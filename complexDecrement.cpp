#include <iostream>

class Complex
{
	private:
		int real {};
		int imag {};
	public:
		Complex(int r, int i) : real {r}, imag {i}
		{}

		Complex() = default;

		inline Complex& operator -- ()
		{
			--real;
			--imag;
			return *this;
		}

		friend std::ostream& operator<<(std::ostream& out, const Complex& c1);

};

std::ostream& operator<<(std::ostream& out, const Complex& c1)
{
	out << c1.real << " + " << c1.imag << "i";

	return out;
}

int main()
{
	Complex c1 {3,5};
	std::cout << "c1 = " << c1 << "\n--c1 = " << --c1 << std::endl;

	return 0;
}
