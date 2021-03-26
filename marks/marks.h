// Student - name and roll no
// sem1 <- student - C language ( marks out of 100 )
// sem2 <- sem1 - C++ ( marks out of 100 )
// sem3 <- sem2 - data structure, computer architecture, operating system
// sem4 <- sem3 - dbms, computer network, java, system programming
// output <- sem4 - calculate avg of all subjects (total 9 subjects)

#ifndef MARKS_H
#define MARKS_H

class Student
{
	private:
		std::string name {};
		std::size_t roll {};
	public:
		void getBio();
		void displayBio();
};

class sem1 : public Student
{
	protected:
		double cMarks {};
	public:
		void getSem1Marks();
		void displaySem1Marks();
};

class sem2 : public sem1
{
	protected:
		double cppMarks {};
	public:
		void getSem2Marks();
		void displaySem2Marks();
};

class sem3 : public sem2
{
	protected:
		double dsMarks {};	// Data structure marks
		double compArchMarks {};	// Computer architecture marks
		double osMarks {};	// Operating system marks
	public:
		void getSem3Marks();
		void displaySem3Marks();
};

class sem4 : public sem3
{
	protected:
		double dbmsMarks {};	// Database management system marks
		double compNetMarks {};	// Computer network marks
		double javaMarks {};
		double sysProgMarks {};	// System programming
	public:
		void getSem4Marks();
		void displaySem4Marks();
};

class total : public sem4
{
	protected: 
		double totalMarks {};
		double avgMarks{};	// Average marks
		const std::size_t totalSubjects {9};
	public:
		void getAllDetails();
		void calcAvg();	// Calculate average marks of all subjects
		void displayAllDetails();
};

#endif
