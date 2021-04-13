#include <iostream>

bool isHappy(const int& n)
{
	if (n == 1 || n == 7)
		return true;

	int sum {n}, x {n};

	while (sum > 9)
	{
		sum = 0;

		while (x > 0)
		{
			int d = x % 10;
			sum += d * d;
			x /= 10;
		}

		if (sum == 1)
			return true;

		x = sum;
	}

	if (sum == 7)
		return true;
	return false;
}

int main(int argc, char** argv)
{
	auto num { std::stoi(argv[1]) };

	std::cout << (isHappy(num) ? "true" : "false") << std::endl;

	return 0;
}

