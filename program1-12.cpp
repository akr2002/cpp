// Program to count the number of characters entered

#include <iostream>

int main()
{
	int chcount = 0;
	const char ent = '\n';
	char ch;
	std::cin.get(ch);
	while (ch != ent)
	{
		++chcount;
		std::cout.put(ch);
		std::cin.get(ch);
	}
	std::cout << "\nThe number of characters = " << chcount << "\n";

	return 0;
}

