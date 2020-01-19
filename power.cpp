#include <iostream>

double power();

int main()
{
	std::system("clear");

	double n, result;
	int p;

	std::cout << "Enter value for base p: ";
	std::cin >> p;
	std::cout << "Enter value for power n: ";
	std::cin >> n;

	std::cout << "Function is called with two arguments: " << p << " " << n << std::endl;	
	result = power(p, n);
	std::cout << result << std::endl;

	std::cout << "Function is called with one argument: " << p << std::endl;
	result = power(p);
	std::cout << result << std::endl;

	std::cout << "\nPress Enter to exit...";

	std::cin.ignore();
	std::cin.get();

	return 0;
}

double power(double n, int p = 2)
{
	double res = 1;
	if (n == 0)
		res = 0;
	else
		for (int i = 1; i <= p; ++i)
			res = res * n;

	return res;
}

