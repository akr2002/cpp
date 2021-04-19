#define GSL_THROW_ON_CONTRACT_VIOLATION
#include <gsl/gsl>
#include <iostream>

int main(void)
{
	int array[5] = {1, 2, 3, 4, 5};
	auto span = gsl::span(array);

	for (const auto &elem : span)
	{
		std::clog << elem << '\n';
	}

	for (auto i = 0; i < 5; ++i)
	{
		std::clog << span[i] << '\n';
	}

	try
	{
		std::clog << span[5] << '\n';
	}

	catch(const gsl::fail_fast &e)
	{
		std::cout << "exception: " << e.what() << '\n';
	}
}
