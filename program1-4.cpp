// Write a program to find the numbers when their sum (S) and product (P) is known. Use quadratic equation ax^2 + bx +c 

#include <iostream>
#include <cmath>

int main()
{
	int S, P, a, b, c;
	std::cout << "Enter sum of the two numbers: ";
	std::cin >> S;
	std::cout << "Enter product of the two numbers: ";
	std::cin >> P;

	if (S > 0)
		std::cout << "Quadratic equation formed is: x*x - " << S << "x + " << P << "\n";
	else std::cout << "Quadratic rquation formed is: x*x + " << S << "x + " << P << "\n";

	a = 1;
	b = -S;
	c = P;

	std::cout << "Coefficients are: a = " << a << ", b = " << b << ", c = " << c << "\n";

	double discriminant = b*b - 4.0 * a * c;
	double sqroot = sqrt(discriminant);
	double root1 = (-b + sqroot) / (2.0 * a);
	double root2 = (-b - sqroot) / (2.0 * a);

	std::cout << "Two numbers whose sum is " << S << " and product is " << P << " are " << root1 << " and " << root2 << "\n";

	return 0;
}
