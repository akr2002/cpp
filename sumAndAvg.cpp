// The program takes input upto an arbitrary value and prints sum and average 

#include <iostream>

int main()
{
	double sum {}, avg {};
	std::size_t it {};
	while (true)
	{
		double n {};
		char ans {};
		std::cout << "Enter a number: ";
		std::cin >> n;
		sum += n;
		avg = sum / ++it;
		std::cout << "Enter another number?: ";
		std::cin >> ans;
		if (ans == 'n' || ans == 'N')
			break;
	}

	std::cout << "Sum: " << sum 
		<< "\nAverage: " << avg << std::endl;

	return 0;
}
