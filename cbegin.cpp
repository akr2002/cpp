// Returns a const_iterator pointing to the first character of the string.

#include <iostream>
#include <string>

int main()
{
	std::string str ("Lorem ipsum");
	for (auto it = str.cbegin(); it != str.cend(); ++it)
		std::cout << *it;
	std::cout << "\n";

	return 0;
}

