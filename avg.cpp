// calculate and print percentage and average marks of three students (4 subjects)
// base: eng, math, phy, c++ (out of 100)
// stu1 <- base: name, roll, perc, avg
// stu2 <- base: ...
// stu3 <- base: ...

#include <iostream>
#include <iomanip>
#include <limits>

inline void flushInput()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

class Subjects
{
	protected:
		double english {};
		double maths {};
		double physics {};
		double cpp {};
	public:
		void getMarks()
		{
			std::cout << "Enter marks in English: ";
			std::cin >> english;
			std::cout << "Enter marks in Mathematics: ";
			std::cin >> maths;
			std::cout << "Enter marks in Physics: ";
			std::cin >> physics;
			std::cout << "Enter marks in C++: ";
			std::cin >> cpp;
		}
};

class Student1 : public Subjects
{
	private: 
		std::string name {};
		std::size_t roll {};
		double percentage {};
		double average {};
	public:
		void getDetails()
		{
			//flushInput();
			std::cout << "\nEnter name of student 1: ";
			std::getline(std::cin, name);
			std::cout << "Enter roll no.: ";
			std::cin >> roll;
			getMarks();
			percentage = ((english + maths + physics + cpp) / 400) * 100;
			average = (english + maths + physics + cpp) / 4;
		}

		void showDetails()
		{
			std::cout << "\n**********Student 1 details**********\n";
			std::cout << "Name: " << name
				<< "\nRoll no.: " << roll
				<< std::fixed << std::setprecision(2)
				<< "\nEnglish: " << english 
				<< "\nMathematics: " << maths
				<< "\nPhysics: " << physics
				<< "\nC++: " << cpp
				<< "\nAverage: " << average
				<< "\nPercentage: " << percentage << "%" << std::endl;
		}
};

class Student2 : public Subjects
{
	private: 
		std::string name {};
		std::size_t roll {};
		double percentage {};
		double average {};
	public:
		void getDetails()
		{
			flushInput();
			std::cout << "\nEnter name of student 2: ";
			std::getline(std::cin, name);
			std::cout << "Enter roll no.: ";
			std::cin >> roll;
			getMarks();
			percentage = ((english + maths + physics + cpp) / 400) * 100;
			average = (english + maths + physics + cpp) / 4;
		}

		void showDetails()
		{
			std::cout << "\n**********Student 2 details**********\n";
			std::cout << "Name: " << name
				<< "\nRoll no.: " << roll
				<< std::fixed << std::setprecision(2)
				<< "\nEnglish: " << english 
				<< "\nMathematics: " << maths
				<< "\nPhysics: " << physics
				<< "\nC++: " << cpp
				<< "\nAverage: " << average
				<< "\nPercentage: " << percentage << "%" << std::endl;
		}
};

class Student3 : public Subjects
{
	private: 
		std::string name {};
		std::size_t roll {};
		double percentage {};
		double average {};
	public:
		void getDetails()
		{
			flushInput();
			std::cout << "\nEnter name of student 3: ";
			std::getline(std::cin, name);
			std::cout << "Enter roll no.: ";
			std::cin >> roll;
			getMarks();
			percentage = ((english + maths + physics + cpp) / 400) * 100;
			average = (english + maths + physics + cpp) / 4;
		}

		void showDetails()
		{
			std::cout << "\n**********Student 3 details**********\n";
			std::cout << "Name: " << name
				<< "\nRoll no.: " << roll
				<< std::fixed << std::setprecision(2)
				<< "\nEnglish: " << english 
				<< "\nMathematics: " << maths
				<< "\nPhysics: " << physics
				<< "\nC++: " << cpp
				<< "\nAverage: " << average
				<< "\nPercentage: " << percentage << "%" << std::endl;
		}
};

int main()
{
	Student1 student1;
	student1.getDetails();
	Student2 student2;
	student2.getDetails();
	Student3 student3;
	student3.getDetails();

	student1.showDetails();
	student2.showDetails();
	student3.showDetails();

	return 0;
}

