// wap for eligibility if students for next semester (10 studets)
// name, roll, fee paid
// fee = 50000
// if fee paid > 60% then eligible
// else not eligible
// public: eligible()

#include <iostream>
#include <array>
#include <string>

class Fees
{
	private:
		std::string name;
		int roll;
		const float fee {50000};
		bool isEligible;
	public:
		void get();
		void display();
		void checkEligibility(float paid);
};

void Fees::get()
{
	float paid_fee {};

	std::cout << "Name: ";
	std::cin >> name;
	std::cout << "Roll number: ";
	std::cin >> roll;
	std::cout << "Fee paid: ";
	std::cin >> paid_fee;
	checkEligibility(paid_fee);
}

void Fees::checkEligibility(float paid)
{
	float percentage { (paid / fee)*100 };
	if (percentage > 60)
		isEligible = true;
	else isEligible = false;
}

void Fees::display()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Roll number: " << roll << std::endl;
	isEligible ? std::cout << "Eligible for next semester\n" : std::cout << "Not eligible for next semester\n";
	std::cout << std::endl;
}

int main()
{
	const int num {10};
	std::array<Fees, num> students;
	
	std::cout << "**Fee is 50000. If fee paid is less than 60%, the student is not eligible for next semester**" << std::endl;

	std::cout << "Enter the details about " << num << " students.\n";
	for (auto& student : students)
	{
		student.get();
		std::cout << std::endl;
	}

	std::cout << "\n**********OUTPUT**********\n";

	for (auto& student : students)
	{
		student.display();
	}

	return 0;
}
