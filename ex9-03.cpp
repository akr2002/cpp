#include <iostream>

template <int lower, int upper, typename T>
bool is_in_range(const T &value)
{
	return (value <= upper) && (value >= lower);
}

int main()
{
	double value {100.0};
	std::cout << is_in_range<0, 500>(value);

	return 0;
}
