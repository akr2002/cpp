#include <iostream>

int main()
{
	std::system("clear");

	int low, high, i, flag;

	std::cout << "Enter two numbers (intervals): " << std::endl;
	std::cin >> low >> high;

	std::cout << "Prime numbers between " << low << " and " << high << " are: " << std::endl;

	while (low < high)
	{
		bool flag = false;

		for (i = 2; i <= low / 2; ++i)
		{
			if (low % i == 0)
			{
				flag = true;
				break;
			}
		}
		if (flag == false)
			std::cout << low << " ";

		++low;
	}

	std::cout << "\nPress Enter to exit...";

	std::cin.ignore();
	std::cin.get();

	return 0;
}

