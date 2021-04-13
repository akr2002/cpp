#include <map>
#include <string_view>
#include <iostream>

int romanToInt(std::string_view roman)
{
	std::map<char, std::size_t> r_i {
		{ 'I', 1 },
		{ 'V', 5 },
		{ 'X', 10 },
		{ 'L', 50 },
		{ 'C', 100 },
		{ 'M', 1000 }
	};

	std::size_t integer {};

	for (int i = 0; i < roman.length(); ++i)
	{
		if (r_i[roman[i]] < r_i[roman[i + 1]])
		{
			integer += r_i[roman[i + 1]] - r_i[roman[i]];
			++i;
			continue;
		}
		integer += r_i[roman[i]];
	}

	return integer;
}

int main(int argc, char** argv)
{
	std::string roman {argv[1]};
	std::cout << roman << " = " << romanToInt(roman) << std::endl;

	return 0;
}
