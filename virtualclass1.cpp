#include <iostream>

class b1
{
	protected:
		int b {5};
};

class d1 : public b1
{};

class d2 : public b1
{};

class Final : virtual public d1, virtual public d2
{
	public:
		void print() { std::cout << b << std::endl; }
};

int main()
{
	Final f;
	f.print();
	return 0;
}
