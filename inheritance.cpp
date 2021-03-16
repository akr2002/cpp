#include <iostream>

class A
{
	private:
		int a {};
	protected:
		int b {};
	public:
		int c {};
		void getdata();
		void showdata();
};

class B : public A
{
	private: 
		int d {};
	public:
		void get();
		void show();
};

void A::getdata()
{
	std::cout << "A::getdata(): Enter three integers: ";
	std::cin >> a >> b >> c;
}

void A::showdata()
{
	std::cout << "A::showdata(): The entered integers are: " << a << " " <<  b << " " << c << std::endl;
}

void B::get()
{
	std::cout << "B::get(): Enter an integer: ";
	std::cin >> d;
}

void B::show()
{
	std::cout << "B::show(): Integers of class A accessible by member function of class B: " << b << " " << c << std::endl;
	std::cout << "B::show(): Integer of class B: " << d << std::endl;
}

int main()
{
	B b;
	b.getdata();
	b.get();
	b.showdata();
	b.show();
	
	return 0;
}
