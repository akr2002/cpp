#include <iostream>
#include <array>
#include <algorithm>
#include <memory>

class List
{
	private:
		std::array<float, 5> prices {};
		std::shared_ptr<float> largest_price {};
		float sum_price {};
	public:
		List(std::array<float, 5> list);
		List();
		void sum();
		inline void max();
		void display();
};

List::List(std::array<float, 5> list) : prices(list)
{
	sum();
	max();
}

List::List()
{
	std::cout << "Enter price of 5 items: ";
	for (auto& price : prices)
	{
		std::cin >> price;
	}
	sum();
	max();
}

void List::sum()
{
	for (const auto& price : prices)
	{
		sum_price += price;
	}
}

void List::max()
{
	largest_price = std::max_element(prices.begin(), prices.end());
}

void List::display()
{
	std::cout << "Largest price: " << largest_price.get() << std::endl;
	std::cout << "Sum: " << sum_price << std::endl;
}

int main()
{
	std::array<float, 5> prices;
	std::cout << "Enter price of 5 items: ";
	for (auto& price : prices)
	{
		std::cin >> price;
	}

	List list(prices);
	list.display();

	return 0;
}
