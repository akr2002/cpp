// Exercise 5-5. Write a program equivalent to that of Exercise 5-4, except for
// the following:
//
// This time you should first reverse the characters in the array, before 
// printing them out left to right (for the sake of the exercise you could 
// still use a loop to print out the characters one by one).

#include <iostream>

int main()
{
	std::cout << "This program is same as Exercise 5-4 except that the string is reversed first before printing them out left to right\n";

	char str[1001];
	std::cout << "\nEnter a string: ";
	std::cin.getline(str, 1000);
	int i {}, j{};

	// Count the number of characters entered by the user
	for (i; str[i] != '\0'; ++i);
	std::cout << "\nNumber of characters entered: " << i << "\n";

	// Store the reversed string in another variable
	char rev[1001];
	for (i; i >= 0; rev[j++] = str[i--]);

	std::cout << "\nThe string in reversed order: ";
	//for (j = 0; j != '\0'; std::cout << rev[j++]);
	std::cout << rev << std::endl;

	return 0;
}

