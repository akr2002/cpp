#include <iostream>
#include <iomanip>
#include <vector>
#include <limits>

struct Student
{
	std::string name {};
	char grade {};
};

int main()
{
	std::vector<Student> students {};

	while (true)
	{
		Student student {};
		char ans {};

		std::cout << "Student's name: ";
		std::cin >> student.name;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max, '\n');
		std::cout << "Grade: ";
		std::cin >> student.grade;
		students.push_back(student);
		std::cout << "Enter details of another student? ";
		std::cin >> ans;
		if (ans == 'n' || ans == 'N')
			break;
	}

	std::cout << "\n------------------------------\n"
		<< std::setw(25) << std::left << "Name" 
		<< std::setw(5) << std::left <<"Grade"
		<< "\n------------------------------\n";
	for (const auto& student : students)
	{
		std::cout << std::setw(25) << std::left << student.name
			<< std::setw(5) << std::left << student.grade << "\n";
	}
	std::cout << "------------------------------" << std::endl;

	return 0;
}
