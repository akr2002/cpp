/* In this program we attempt to create a banking app where
 * user can create account, add and update balance, and 
 * save records in a records.dat file
 */

// TODO: add exception handling
#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

class Account
{
	private:
		char accNo[11];		// 10 digit account number
		bool accNoAuth();  // returns true if account number is 10 digit number
		char name[30];
		unsigned float balance;
		unsigned float ROI;		// Rate Of Interest (anything per annum divided by 100, so in any sane condition it should not be greater than 1
		unsigned float time;		// float, in years
		static std::fstream file("records.dat", std::ios::in | std::ios::out | std::ios::binary | std::ios::noreplace);
		Account temp;
	public:
		Account();
		bool enterAccNo();
		bool createAcc();	// create account; returns false in case of unsuccessful account creation
		bool deposit();		// returns false upon failure
		bool withdraw();	// returns false if withdraw amt > deposit amt; also false on failure
		void run();		// runs in loop; interface for carrying other actions
		void flush();		// flush all values of temp at every iteration of run()
		void viewDetails();	// View details of all accounts
		void viewSpecificDetail(); // View details of a specific account
};

Account::Account()
{
	strcpy(accNo, "NULL");
	strcpy(name, "NULL");
	balance = 0.0;
	ROI = 0.0;
	time = 0.0;
}

void Account::run()
{
	flush();
	int choice = 1;
	bool result;
	while (choice != 6)
	{
		std::cout << "\n1. Create account\n"
			<< "2. Deposit money\n"
			<< "3. Withdraw money\n"
			<< "4. View specific amount details\n"
			<< "5. View details of all accounts\n"
			<< "6. Exit\n"
			<< "Enter choice (1-6): ";
		std::cin >> choice;

		switch (choice)
		{
			case 1: if (!createAcc())
					std::cout << "\nAccount creation failed\n";
				break;
			case 2: deposit(); break;
			case 3: withdraw(); break;
			case 4: viewSpecificDetail(); break;
			case 5: viewDetails();
			case 6: return ;
		}
	}
}

void Account::flush()
{
	strcpy(accNo, "NULL");
	strcpy(name, "NULL");
	balance = 0.0;
	ROI = 0.0;
	time = 0.0;
}

bool Account::createAcc()
{
	bool res;
	res = enterAccNo();
	if (!res)
		return false;

	std::cout << "Enter name: ";
	std::cin.getline(temp.name, 30);
	std::cout << "Enter deposit amount: ";
	std::cin >> temp.balance;
	file.write((char *)&temp, sizeof(temp));
	return true;
}

bool Account::enterAccNo()
{

	std::cout << "\nEnter account number: ";
	std::cin.getline(temp.accNo, 11);
	if (!accNoAuth()) 
	{
		std::cout << "\nINVALID ACCOUNT NUMBER\n";
		return false;
	}
	return true;
}

bool Account::accNoAuth()
{
	for (int i = 0; i < 10; ++i)
	{
		if (isnum(temp.accNo[i]))
			return false;
	}
	return true;
}

bool Account::withdraw()
{
	if (!enterAccNo())
		withdraw();
	file.seekp(0);
	while(file.read((char *)&temp, sizeof(temp)))
		if (!strcmp(this->accNo, temp.accNo))
			break;
	unsigned float withdrawBal = temp.balance + 1;
	while (withdrawBal > temp.balance)
	{	
		std::cout << "Enter withdraw amount: ";
		std::cin >> withdrawBal;
		if (withdrawBal > temp.balance)
			std::cout << "Withdraw amount cannit be greater than account balance.\n";
	}
	temp.balance -= withdrawBal;
	file.seekp(cur - (sizeof(temp)), std::ios::cur);
	file.write((char *)&temp, sizeof(temp));
	std::cout << "\nAccount details updated successfully\n";
	return true;
}

bool Account::deposit()
{
	unsigned float depAmt;	// deposit amount
	if (!enterAccNo())
		deposit();
	file.seekp(0);
	while(file.read((char *)&temp, sizeof(temp)))
		if (!strcmp(this->accNo, temp.accNo))
				break;
	std::cout << "Enter deposit amount: ";
	std::cin >> depAmt;
	temp.balance += depAmt;
	file.seekp(cur - (sizeof(temp)), std::ios::cur);
	file.write((char *)&temp, sizeof(temp));
	std::cout << "\nAccount details updated successfully\n";
	return true;
}

void Account::viewSpecificDetail()
{
	if (!enterAccNo())
		viewSpecificDetail();
	file.seekp(0);
	while(file.read((char *)&temp, sizeof(temp)))
		if (!strcmp(this->accNo, temp.accNo))
			break;
	std::cout << "\nAccount no.: " << temp.accNo
		<< "\nName: " << temp.name
		<< "\nBalance: " << temp.balance << std::endl;
}

void Account::viewDetails()
{
	file.seekp(0);
	while(file.read((char *)&temp, sizeof(temp)))
	{
		std::cout << "\nAccount no.: " << temp.accNo
			<< "\nName: " << temp.name
			<< "\nBalance: " << temp.balance << std::endl;
	}
}

int main()
{
	Account account;
	account.run();
	return 0;
}

