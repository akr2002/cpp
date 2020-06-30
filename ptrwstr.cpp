// Initializing pointers with strings

#include <iostream>

int main()
{
	const char *pstar1 { "Fatty Arbuckle" };
	const char *pstar2 { "Clara Bow" };
	const char *pstar3 { "Lassie" };
	const char *pstar4 { "Slim Pickens" };
	const char *pstar5 { "Boris Carloff" };
	const char *pstar6 { "Mae West" };
	const char *pstar7 { "Oliver Hardy" };
	const char *pstar8 { "Greta Garbo" };
	const char *pstr { "Your lucky star is " };

	std::cout << "Pick a lucky star number between 1 and 8: ";
	std::size_t choice {};
	std::cin >> choice;

	switch (choice)
	{
		case 1: std::cout << pstr << pstar1 << "\n"; break;
		case 2: std::cout << pstr << pstar2 << "\n"; break;
		case 3: std::cout << pstr << pstar3 << "\n"; break;
		case 4: std::cout << pstr << pstar4 << "\n"; break;
		case 5: std::cout << pstr << pstar5 << "\n"; break;
		case 6: std::cout << pstr << pstar6 << "\n"; break;
		case 7: std::cout << pstr << pstar7 << "\n"; break;
		case 8: std::cout << pstr << pstar8 << "\n"; break;
		default: std::cout << "Sorry, you haven't got a lucky star.\n"; break;
	}

	return 0;
}
