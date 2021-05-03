#include <iostream>

unsigned long long int fibonacci(int n)
{
	return n == 0 || n == 1 ? 1 : fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char** argv)
{
	auto n { std::stoi(argv[1]) };

	std::cout << fibonacci(n) << std::endl;

	return 0;
}
