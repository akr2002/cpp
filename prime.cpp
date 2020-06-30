// C++ Program to display Prime Numbers when Larger number is entered first

#include <iostream>

int main()
{
	int low, high, flag, temp;

	std::cout << "Enter two numbers (intervas): ";
	std::cin >> low >> high;

	// swapping numbers if low is greater than high
	if (low > high)
	{
		temp = low;
		low = high;
		high = temp;
	}
	
	std::cout << "Prime numbers between " << low << " and " << high << " are: ";


	while (low < high)
	{
		flag = 0;

		for (int i = 2; i <= low/2; ++i)
		{
			if (low % i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			std::cout << low << " ";

		++low;
	}

	return 0;
}

