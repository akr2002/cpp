#include <iostream>
#include "marks.h"

void Student::getBio()
{
	std::cout << "Name: ";
	std::cin >> name;
	std::cout << "Roll No.: ";
	std::cin >> roll;
}

void Student::displayBio()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Roll No.: " << roll << std::endl;
}

void sem1::getSem1Marks()
{
	std::cout << "Marks in C: ";
	std::cin >> cMarks;
}

void sem1::displaySem1Marks()
{
	std::cout << "Marks in C: " << cMarks << std::endl;
}

void sem2::getSem2Marks()
{
	std::cout << "Marks in C++: ";
	std::cin >> cppMarks;
}

void sem2::displaySem2Marks()
{
	std::cout << "Marks in C++: " << cppMarks << std::endl;
}

void sem3::getSem3Marks()
{
	std::cout << "Marks in data structure: ";
	std::cin >> dsMarks;
	std::cout << "Marks in computer architecture: ";
	std::cin >> compArchMarks;
	std::cout << "Marks in operating system: ";
	std::cin >> osMarks;
}

void sem3::displaySem3Marks()
{
	std::cout << "Marks in data structure: " << dsMarks
		<< "\nMarks in computer architecture: " << compArchMarks
		<< "\nMarks in operating system: " << osMarks << std::endl;
}

void sem4::getSem4Marks()
{
	std::cout << "Marks in DBMS: ";
	std::cin >> dbmsMarks;
	std::cout << "Marks in computer network: ";
	std::cin >> compNetMarks;
	std::cout << "Marks in java: ";
	std::cin >> javaMarks;
	std::cout << "Marks in system programming: ";
	std::cin >> sysProgMarks;
}

void sem4::displaySem4Marks()
{
	std::cout << "Marks in DBMS: " << dbmsMarks
		<< "\nMarks in computer network: " << compNetMarks
		<< "\nMarks in java: " << javaMarks
		<< "\nMarks in system programming: " << sysProgMarks << std::endl;
}

// Function calls to get marks
void total::getAllDetails()
{
	std::cout << "Enter the following details: " << std::endl;
	getBio();
	getSem1Marks();
	getSem2Marks();
	getSem3Marks();
	getSem4Marks();
}

void total::displayAllDetails()
{
	std::cout << "\n**********The details were entered**********" << std::endl;
	displayBio();
	displaySem1Marks();
	displaySem2Marks();
	displaySem3Marks();
	displaySem4Marks();

	std::cout << "\nTotal marks: " << totalMarks
		<< "\nAverage marks: " << avgMarks << std::endl;
}

void total::calcAvg()
{
	totalMarks += cMarks + cppMarks + dsMarks + compArchMarks + osMarks + dbmsMarks + compNetMarks + javaMarks + sysProgMarks;
	avgMarks = totalMarks / totalSubjects;
}

