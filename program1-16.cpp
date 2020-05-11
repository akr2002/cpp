// Program to read sales of 5 salesman in 12 months and to print sales made by each salesman

#include <iostream>

int main()
{
	int i, j, total;
	int sales[5][12];
	for (i = 0; i < 5; ++i)
	{
		total = 0;
		std::cout << "Enter sales for salesman " << i + 1 << ":\n";
		for (j = 0; j < 12; ++j)
		{
			std::cout << "\nMonth " << j + 1 << ": ";
			std::cin >> sales[i][j];
			total = total + sales[i][j];
		}
		std::cout << "\n";
		std::cout << "Total sales of salesman " << i + 1 << ": " << total << "\n";
	}
	return 0;
}
