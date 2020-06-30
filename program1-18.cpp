// Program to illustrate working of call-by-reference method of a function invoking

#include <iostream>

void change(int &a)
{
	a = 20;
	std::cout << "Value of orig in function change() is: " << a  << "\n";
	return ;
}
int main()
{
	int orig = 10;
	std::cout << "The original value is: " << orig << "\n";
	change(orig);
	std::cout << "Value after change() is over: " << orig << "\n";
	return 0;
}
