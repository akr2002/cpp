#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string n1, n2;
	std::cout << "Enter two integers: ";
	std::cin >> n1 >> n2;

	std::reverse(n1.begin(), n1.end());
	std::reverse(n2.begin(), n2.end());

	int num1 = std::stoi(n1);
	int num2 = std::stoi(n2);
	int sum = num1 + num2;

	std::cout << "Sum of the reversed integers is " << num1 << " + "
		<< num2 << " = " << sum << std::endl;

	return 0;
}
