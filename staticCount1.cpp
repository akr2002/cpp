#include <iostream>
#include <array>

class Count
{
	private:
		int a;
		static int c;
	public:
		void assign();
		void display();
		static void displayStatic();
};

int Count::c {};

void Count::assign()
{
	a = ++c;
}

void Count::display()
{
	std::cout << "a = " << a << std::endl;
}

void Count::displayStatic()
{
	std::cout << "count = " << c << std::endl;
}

int main()
{
	const int num {3};
	std::array<Count, num> count;

	Count::displayStatic();
	for (auto& x : count)
	{
		x.assign();
	}

	for (auto& x: count)
	{
		x.display();
	}
	Count::displayStatic();

	return 0;
}
