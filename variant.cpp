#include <iostream>
#include <variant>

int main(void)
{
	std::variant<int, double> v = 42;
	std::cout << std::get<int>(v) << '\n';

	v = 4.2;
	std::cout << std::get<double>(v) << '\n';
}
