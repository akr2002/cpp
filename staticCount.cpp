#include <iostream>
#include <array>

class Test
{
	private:
		int n;
		static int count;
	public:
		void set(int n);
		void display();
};

int Test::count {0};

void Test::set(int n)
{
	this->n = n;
	++count;
}

void Test::display()
{
	std::cout << count << " ";
}

int main()
{
	const std::size_t num {10};
	std::array<Test, num> tests;

	for (auto& test: tests)
	{
		test.set(5);
	}

	for (auto& test : tests)
	{
		test.display();
	}

	return 0;
}
