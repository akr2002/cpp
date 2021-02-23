#include <iostream>
#include <string>

class Fine
{
	public:
		std::string name;
		int roll;
		float fine;
} ;

int main()
{
	Fine student[3];
	
	float totalFine {};

	for (int i {}; i < 3; ++i)
	{
		std::cout << "Enter name of student " << i+1 << ": ";
		std::cin >> student[i].name;
		std::cout << "Enter roll number: ";
		std::cin >> student[i].roll;
		std::cout << "Enter fine: ";
		std::cin >> student[i].fine;
		totalFine += student[i].fine;
	}

	std::cout << "**********OUTPUT**********" << std::endl;
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
