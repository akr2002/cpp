#include <iostream>
#include <string>
#include <limits>

class Fine
{
	public:
		std::string name;
		std::string roll;
		float fine;
} ;

int main()
{
	Fine student[3];
	
	float totalFine {};

	for (int i {}; i < 3; ++i)
	{
		std::cout << "Enter name of student " << i+1 << ": ";
		std::getline(std::cin, student[i].name, '\n');
		std::cout << "Enter roll number: ";
		std::getline(std::cin, student[i].roll, '\n');
		std::cout << "Enter fine: ";
		std::cin >> student[i].fine;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		totalFine += student[i].fine;
	}

	std::cout << "\n**********OUTPUT**********\n" << std::endl;
	for (int i {}; i < 3; ++i)
	{
		std::cout << "Name: " << student[i].name << std::endl;
		std::cout << "Roll number: " << student[i].roll << std::endl;
		std::cout << "Fine: " << student[i].fine << std::endl;
		std::cout << std::endl;
	}

	std::cout << "Total fine is " << totalFine << std::endl;

	return 0;
}
