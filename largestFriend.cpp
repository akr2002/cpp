#include <iostream>

class C;
class B;
class A
{
	private:
		int i {};
	public:
		A(int n);
		friend int largest(A a, B b, C c);
};

class B 
{
	private:
		int i {};
	public:
		B(int n);
		friend int largest(A a, B b, C c);
};

class C
{
	private:
		int i {};
	public:
		C(int n);
		friend int largest(A a, B b, C c);
};

A::A(int n) : i (n)
{}

B::B(int n) : i (n)
{}

C::C(int n) : i (n)
{}

int largest(A a, B b, C c)
{
	int large = a.i;
	if (b.i > a.i)
	{
		if (b.i > c.i)
		{
			large = b.i;
		}
	}
	if (c.i > b.i)
	{
		if (c.i > a.i)
		{
			large = c.i;
		}
	}
	return large;
}

int main()
{
	int x, y, z;
	std::cout << "Enter three integers: ";
	std::cin >> x >> y >> z;
	A a(x);
	B b(y);
	C c(z);
	int max = largest(a,b,c);
	std::cout << "Largest integer is " << max << std::endl;

	return 0;
}

