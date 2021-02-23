// record name, roll, marks in maths, physics, english out of 100, calculate average, percentage of two students
// name - string
// roll - int
// marks, avg, perc - float
// public: getdata() - get name, roll, marks
// avg() - calculate average
// percentage() - calculate percentage
// display() - display info

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

class Marks
{
	private:
		std::string name;
		int roll;
		float maths;
		float physics;
		float english;
		float average;
		float percentage;

	public:
		void getData();
		void calcAvg();
		void calcPerc();
		void display();
};

void Marks::getData()
{
	std::cout << "Name: ";
	//std::getline(std::cin, name);
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin >> name;
	std::cout << "Roll number: ";
	std::cin >> roll;
	std::cout << "Marks in:\n";
	std::cout << "Physics: ";
	std::cin >> physics;
	std::cout << "Mathematics: ";
	std::cin >> maths;
	std::cout << "English: ";
	std::cin >> english;
}

void Marks::calcAvg()
{
	average = (maths + physics + english) / 3;
}

void Marks::calcPerc()
{
	percentage = ((maths + physics + english) / 300) * 100;
}

void Marks::display()
{
	std::cout << "Name: " << name << "\n";
	std::cout << "Roll number: " << roll << "\n";
	std::cout << "Physics: " << physics << "/100\n";
	std::cout << "Mathematics: " << maths << "/100\n";
	std::cout << "English: " << english << "/100\n";
	std::cout << "Average: " << std::setprecision(4) 
		<< average << "\n";
	std::cout << "Percentage: " << std::setprecision(4) 
		<< percentage << "%\n" << std::endl;
}

int main()
{
	Marks student[3];

	for (int i {}; i < 3; ++i)
	{
		std::cout << "Enter the following details for student " 
			<< i + 1 << ":\n";
		student[i].getData();
		student[i].calcAvg();
		student[i].calcPerc();
	}

	std::cout << "\n**********OUTPUT**********\n";
	for (int i {}; i < 3; ++i)
	{
		student[i].display();
		std::cout << std::endl;
	}

	return 0;
}
