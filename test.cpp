#include <iostream>
#include <memory>

int main()
{
	int row {5}, col {5};
	auto arr { std::make_shared<std::make_shared<int[]>>(col) };

	return 0;
}
