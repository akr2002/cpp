// Program for passing structures to function through call by value and call by reference

#include <iostream>

struct Emp
{
	int empno;
	char name[25];
	double salary;
};

void ReadEmp(Emp &e)
{
	std::cout << "Enter employee no.: ";
	std::cin >> e.empno;
	std::cout << "Enter employee name: ";
	std::cin.getline(e.name, 25);
	std::cout << "Enter employee salary: ";
	std::cin >> e.salary;
}

void ShowEmp(Emp e)
{
	std::cout << "\nEmployee details\n\n";
	std::cout << "Empno: " << e.empno << "\n";
	std::cout << "Name: " << e.name << "\n";
	std::cout << "Salary: " << e.salary << "\n";
}

int main()
{
	Emp e1;
	ReadEmp(e1);
	ShowEmp(e1);
	return 0;
}
