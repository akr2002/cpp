// Addition and multiplication of two numbers using ctor

#include <iostream>

class Math
{
	private:
		int product {}, diff {};
	public: 
		Math(int n1, int n2);
		void display();
};

Math::Math(int n1, int n2)
{
	product = n1 * n2;
	diff = n1 - n2;
}

void Math::display()
{
	std::cout << "Product is " << product << " and difference is " << diff << std::endl;
}

int main()
{
	int n1, n2;
	std::cout << "Enter two numbers: ";
	std::cin >> n1 >> n2;

	Math math(n1, n2);
	math.display();

	return 0;
}
