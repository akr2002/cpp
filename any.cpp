#include <iostream>
#include <any>
struct mystruct
{
	int data;
};

int main(void)
{
	auto myany = std::make_any<int>(42);
	std::cout << std::any_cast<int>(myany) << '\n';

	myany = 4.2;
	std::cout << std::any_cast<double>(myany) << '\n';

	myany = mystruct{42};
	std::cout << std::any_cast<mystruct>(myany).data << '\n';
}
