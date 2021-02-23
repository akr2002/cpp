#include <iostream>

class calculate
{
	private:
		int num1;
		int num2;
	public:
		//void add();
		//void subtract();
		void multiply();
		void enter();

		void add()
		{
			std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
		}

		void subtract()
		{
			std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
		}
};


void calculate::multiply()
{
	std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
}

void calculate::enter()
{
	std::cout << "Enter two integers: ";
	std::cin >> num1 >> num2;
}

int main()
{
	calculate calc;
	calc.enter();
	calc.add();
	calc.subtract();
	calc.multiply();

	return 0;
}
