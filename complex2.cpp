#include <iostream>
#include <array>

class Complex
{
	private:
		int real, imag;
	public:
		void get();
		void display();
		Complex sum(const Complex& c1);
};

void Complex::get()
{
	std::cin >> real >> imag;
}

void Complex::display()
{
	std::cout << real << " + " << imag << "i" << std::endl;
}

Complex Complex::sum(const Complex& c1)
{
	Complex temp;
	temp.real = c1.real + this->real;
	temp.imag = c1.imag + this->imag;
	return temp;
}

int main()
{
	const std::size_t num {2};
	std::array<Complex, num> c;

	std::cout << "Enter real and imaginary parts separated by space:\n";
	for (auto& temp : c)
	{
		std::cout << "> ";
		temp.get();
	}

	Complex s {c.at(1).sum(c.at(0))} ;
	std::cout << "Sum of the entered numbers is ";
	s.display();

	return 0;
}
