#include <iostream>
#include <fstream>
#include <cctype>
#include "toint.h"

int main()
{
	int sum {};
	std::fstream file("int.txt", std::ios::in);

	while (file)
	{
		char x;
		x = file.get();
		if (isdigit(x))
		{
			int i = toint(x);
			sum += i;
		}
	}

	std::cout << "Sum is: " << sum << std::endl;

	file.close();

	return 0;
}
