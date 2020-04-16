// Exercise 5-2. Write a program that uses a while loop to accumulate the sum of an arbitrary number of integers entered by the user.
// After every iteration, ask the user whether he or she is done entering the numbers. The program should output the total of all 
// values and the overall average as a floating-point value.

#include <iostream>
#include <vector>

int main()
{
	std::cout << "This program asks the user for random numbers and outputs the total values and overall average as a floating\n-point value\n";
	std::vector<float> num;

	while (true)
	{
		float temp;
		char ans;
		std::cout << "Enter a number: ";
		std::cin >> temp;
		num.push_back(temp);
		std::cout << "Enter more? (y/n): ";
		std::cin >> ans;
		if (ans == 'y' || ans == 'Y')
			continue;
		else break;
	}

	float total {}, average{};
	std::size_t s {};

	while (s < num.size())
	{
		total += num.at(s++);
	}

	average = total / s;

	std::cout << "Total value: " << total << "\n"
		<< "Average: " << average << "\n";

	return 0;
}

