// Returns a const_reverse_iterator to the reverse beginning of the string

#include <iostream>
#include <string>
int main()
{
	std::string str("lorem ipsum");
	for (auto rit = str.crbegin(); rit != str.crend(); ++rit)
		std::cout << *rit;
	std::cout << "\n";

	return 0;
}

