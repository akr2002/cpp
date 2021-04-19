#include <iostream>

struct mystruct
{
	uint64_t data1;
	uint16_t data2;
};

int main()
{
	std::cout << "size: " << sizeof(mystruct) << '\n';
}
