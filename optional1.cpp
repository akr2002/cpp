#include <iostream>
#include <optional>

class myclass
{
	public:
		int val;

		myclass(int v) : val{v}
		{
			std::cout << "constructed\n";
		}
};

int main(void)
{
	std::optional<myclass> o;
	std::cout << "created, but not constructed\n";

	if (o)
	{
		std::cout << "Attempt #1: " << o->val << '\n';
	}

	o = myclass{42};

	if (o)
	{
		std::cout << "Attempt #2: " << o->val << '\n';
	}
}
