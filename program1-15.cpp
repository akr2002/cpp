// Program to check if a string is palindrome or not

#include <iostream>

int main()
{
	char string[80], c;
	std::cout << "Enter a atring (max. 79 characters): ";
	std::cin.getline(string, 150);
	int len;
	// loop to find the length of the string
	for (len = 0; string[len] != '\0'; ++len);
	int i, j, flag = 1;
	for (i = 0, j = len - 1; i < len/2; ++i, --j)
	{
		if (string[i] != string[j])
		{
			flag = 0;
			break;
		}
	}
	if (flag)
		std::cout << "The entered string is palindrome.\n";
	else std::cout << "The entered string is not palindrome.\n";
	return 0;
}
