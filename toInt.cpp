#include <iostream>
#include <cstdio>
void toInt(char* num)
{
	const char* temp = num;
	int value;
	sscanf(temp, "%d", &value);
	std::cout << value << " ";
}

void parse(char* expression)
{
	int i = 0;
	char temp[6];
	bool numFound = false;
	while (expression[i] != '\0')
	{
		int j = 0;
		while (isdigit(expression[i]))
		{
			numFound = true;
			temp[j] = expression[i];
			++i; ++j;
		}
		if (numFound)
		{
		toInt(temp);
		numFound = false;
		}

		++i;
	}
}

int main()
{
	char expression[30];
	std::cout << "Enter expression: ";
	std::cin.getline(expression, 30);
	parse(expression);
	return 0;
}
