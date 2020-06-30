// Program to inout characters and change their case (from uppercase to lowercase and vice-versa)

#include <iostream>
#include <cstdio>

int main()
{
	char ch;
	do
	{
		std::cout << "Enter a character: ";
		ch = getchar();
		if (ch == '\n')
			ch = getchar();
		std::cout << std::endl;
		if (ch >= 65 && ch <= 90)	// uppercase
			ch += 32;
		else if (ch >= 97 && ch <= 122)	// lowercase
			ch -= 32;
		putchar(ch);
		std::cout << std::endl;
	} while (ch != '0');

	return 0;
}
