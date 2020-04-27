// Program to display a menu regarding rectangle operations and perform according to user's response.

#include <iostream>
#include <cmath>
#include <cstdio>

int main()
{
	char ch, ch1;
	float l, b, pm, area, diag;

	do
	{
		std::cout << "\nRectangle Menu"
			  << "\n~~~~~~~~~~~~~~\n"
			  << "\n1. Area"
			  << "\n2. Perimeter"
			  << "\n3. Diagonal"
			  << "\n4. Exit"
			  << "\nEnter your choice: ";
		std::cin >> ch;
		if (ch == '1' || ch == '2' || ch == '3')
		{
			std::cout << "\nEnter length & breadth: ";
			std::cin >> l >> b;
		}

		switch (ch)
		{
			case '1': area = l * b;
				  std::cout << "Area: " << area << "\n";
				  break;
			case '2': pm = 2 * (l + b);
				  std::cout << "Perimeter: " << pm << "\n";
				  break;
			case '3': diag = sqrt(l*l + b*b);
				  std::cout << "Diagonal: " << diag << "\n";
				  break;
			case '4': break;
			default: std::cout << "Wrong choice\n";
		}
		std::cout << "\nPress any key to continue...\n";
		ch1 = getchar();
	} while (ch >= '1' && ch <= '3');

	return 0;
}
