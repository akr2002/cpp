#include <iostream>

class Base1
{
	private:
		int x;
	public:
		void get(int a)
		{
			x = a;
		}
		void disp1()
		{
			std::cout << "Base1::x = " << x << std::endl;
		}
};

class Base2
{
	private:
		int y;
	public:
		void get(int a)
		{
			y = a;
		}
		void disp2()
		{
			std::cout << "Base2::y = " << y << std::endl;
		}
};

class D1 : public Base1, public Base2
{
	public:
		void display()
		{
			disp1();
			disp2();
		}
};

int main()
{
	D1 d1;
	d1.Base1::get(5);
	d1.Base2::get(7);
	d1.display();
	return 0;
}
