// Program to calculate the factorial of an integer

#include <iostream>

int main()
{
	unsigned long long int fact = 1;
	int i, num;
	std::cout << "Enter integer: ";
	std::cin >> num;
	i = num;

	while (num)
	{
		fact *= num;
		--num;
	}

	std::cout << "The factorial of " << i << " is " << fact << "\n";

	return 0;
}
