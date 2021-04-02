#include <iostream>

class b1
{
	protected:
		int b {5};
};

class d1 : virtual public b1
{};

class d2 : virtual public b1
{};

class Final : public d1, public d2
{
	public:
		void printb() { std::cout << b << std::endl; }
};

int main()
{
	Final f;
	f.printb();
	return 0;
}
