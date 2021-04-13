#include <iostream>
#include <cmath>

bool isPrime(const int& n)
{
	int d = 2;
	int root = static_cast<int>(std::sqrt(n));

	while (d <= root)
	{
		if (n % d == 0)
		{
			return false;
		}

		++d;
	}

	return true;
}

int countPrimes(const int& n)
{
	int count {};
	for (std::size_t i {2}; i < n; ++i)
	{
		if (isPrime(i))
		{
			++count;
		}
	}

	return count;
}

int main(int argc, char** argv)
{
	auto num { std::stoi(argv[1]) };

	std::cout << countPrimes(num) << std::endl;

	return 0;
}
