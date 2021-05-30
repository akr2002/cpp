#include <iostream>
#include <iomanip>
#include <vector>

struct Bill
{
	std::string productID {};
	std::size_t quantity {};
	double unitPrice {};
	double cost {};
};

int main()
{
	std::vector<Bill> bills {};
	double totalCost {};

	while (true)
	{
		Bill bill {};
		char ans {};
		std::cout << "Enter product ID: ";
		std::cin >> bill.productID;
		std::cout << "Enter quantity: ";
		std::cin >> bill.quantity;
		std::cout << "Enter unit price: ";
		std::cin >> bill.unitPrice;
		std::cout << "Enter details for another product? ";
		bill.cost = bill.quantity * bill.unitPrice;
		totalCost += bill.cost;
		bills.push_back(bill);
		std::cin >> ans;
		if (ans == 'n' || ans == 'N')
			break;
	}

	std::cout << "\n-------------------------------------------"
		  << "\n" << std::setw(10) << std::left << "Product" 
		  << std::setw(11) << std::left << "Quantity" 
		  << std::setw(12) << std::left << "Unit Price" 
		  << std::setw(10) << std::left << "Cost"
		  << "\n-------------------------------------------";

	for (const auto& bill : bills)
	{
		std::cout << "\n" << std::setw(10) << std::left << bill.productID
			  << std::setw(11) << std::left << bill.quantity
			  << std::setw(12) << std::left << bill.unitPrice
			  << std::fixed << std::setprecision(2) << "$" << bill.cost;
	}
	std::cout << "\n" << std::setw(33) << "" << std::fixed << std::setprecision(2) << "$" << totalCost
		  << "\n-------------------------------------------"
		  << std::endl;

	return 0;
}
