#include <iostream>

class Numbers
{
	protected:
		float x {};
		float y {};
};

class Operations : private Numbers
{
	public:
		Operations(const float& a, const float& b);
		inline void add();
		inline void subtract();
		inline void multiply();
		inline void divide();
};

Operations::Operations(const float& a, const float& b) : x(a), y(b) 
{
	//x = a;
	//y = b;

	add();
	subtract();
	multiply();
	divide();
}

void Operations::add()
{
	std::cout << x << " + " << y << " = " << x + y << std::endl;
}

void Operations::subtract()
{
	std::cout << x << " - " << y << " = " << x - y << std::endl;
}

void Operations::multiply()
{
	std::cout << x << " * " << y << " = " << x * y << std::endl;
}

void Operations::divide()
{
	if (y == 0) 
	{
		std::cout << "Cannot divide by zero." << std::endl;
		return ;
	}
	std::cout << x << " / " << y << " = " << x / y << std::endl;
}

int main()
{
	float a, b;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	Operations number(a, b);

	return 0;
}
