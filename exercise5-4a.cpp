// Exercise 5-4. Use std::cin.getline(...) to obtain a C-style string of 
// maximum 1,000 characters from the user. Count the number of characters the 
// user entered using an appropriate loop. Next, write a second loop that 
// prints out all characters, one by one, but in a reverse order

#include <iostream>

int main()
{
	std::cout << "This program uses std::cin.getline(...) to obtain a C-style string of\n"
		<< "maximum 1,000 characters from the user.\n"
		<< "The numbers are counted using an appropriate loop.\n"
		<< "A second loop prints out all characters, one by one, but in a reverse order\n";

	char str[1001];
	std::cout << "\nEnter a string: ";
	std::cin.getline(str, 1000);
	int s {};

	// Count the number of characters entered
	for (s; str[s] != '\0'; ++s);
	std::cout << "\nNumber of characters entered: " << s << "\n";
	
	// Print the characters in reverse order
	std::cout << "\nThe characters in reverse order: ";
	for (s; s >= 0; std::cout << str[s--]);
	std::cout << std::endl;

	return 0;
}

