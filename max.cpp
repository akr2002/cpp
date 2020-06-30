#include <iostream>

int max(int, int);

int main()
{
	std::system("clear");

	int num1, num2;

	std::cout << "Enter two numbers to compare them: " << std::endl;
	std::cin >> num1 >> num2;

	int maxNum = max(num1, num2);

	std::cout << "The greater number is " << maxNum << std::endl;

	std::cout << "\nPress any key to exit...";

	std::cin.ignore();
	std::cin.get();

	return 0;
}

int max(int num1, int num2)
{
	int maxNum;

	if (num1 > num2)
		maxNum = num1;
	else 
		maxNum = num2;

	return maxNum;
}
