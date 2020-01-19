#include <iostream>

class Student
{
	private:
		int rollno;
		std::string name;
		float marks;
		char grade;
	public:
		void readStudent();
		void dispStudent();
		inline int getRollno();
		inline float getMarks();
		void calcGrade();
		void run();
		Student();
};

Student::Student()
{
	rollno = 0;
	name = "NULL";
	marks = 0.0;
	grade = '$';
}

void Student::readStudent()
{
	std::cout << "\nEnter rollno: ";
	std::cin >> rollno;
	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "Enter marks: ";
	std::cin >> marks;
}

void Student::dispStudent()
{
	calcGrade();
	std::cout << "Roll no.: " << rollno;
	std::cout << "\nName: " << name ;
	std::cout << "\nMarks: " << marks;
	std::cout << "\nGrade: " << grade << std::endl;
}

int Student::getRollno()
{
	return rollno;
}

float Student::getMarks()
{
	return marks;
}

void Student::calcGrade()
{
	if (marks >= 75)
		grade = 'O';
	else if (marks >= 60)
		grade = 'A';
	else if (marks >= 50)
		grade = 'B';
	else if (marks >= 40)
		grade = 'C';
	else grade = 'F';
}

void Student::run()
{
	Student XIIa[10];
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "\nEnter details of Student " << i + 1 << ": ";
		XIIa[i].readStudent();
	}

	int choice = 1, rollno, pos = -1;
	float highmarks = 0;

	while (true)
	{
		std::cout << "\n\nMain Menu\n"
			  << "1. Specific student\n"
			  << "2. Topper\n"
			  << "3. Exit\n"
			  << "Enter your choice (1 - 3): ";
		std::cin >> choice;

		switch (choice)
		{
			case 1: std::cout << "\nEnter roll no. of the student whose details you want to see: ";
				std::cin >> rollno;
				for (int i = 0; i < 10; ++i)
				{
					if (XIIa[i].getRollno() == rollno)
					{
						XIIa[i].dispStudent();
						break;
					}
					if (i == 10) std::cout << "\nINVALID ROLLNO\n";
				}
				break;

			case 2: for (int i = 0; i < 10; ++i)
				{
					if (XIIa[i].getMarks() > highmarks)
					{
						pos = i;
						highmarks = XIIa[i].getMarks();
					}
				}
				XIIa[pos].dispStudent();
				break;

			case 3: return ;
			default: std::cout << "\nWRONG CHOICE\n";
				 break;
		}
	}
}

int main()
{
	Student student;
	student.run();
	return 0;
}

