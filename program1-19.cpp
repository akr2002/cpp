// Program to print the largest element of an array (using a function).

#include <iostream>

float large(float arr[], int n)
{
	float max = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

int main()
{
	char ch;
	int i = 0;
	float amount[50], biggest;
	for (i = 0; i < 50; ++i)
	{
		std::cout << "Enter element no. " << (i+1) << ": ";
		std::cin >> amount[i];
		std::cout << "More elements? (y/n): ";
		std::cin >> ch;
		if (ch != 'y')
			break;
	}
	if (i < 50)
		++i;
	biggest = large(amount, i);
	std::cout << "The largest element of the array is " << biggest << "\n";
	return 0;
}
