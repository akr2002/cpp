// C++ Program to display prime numbers between two numbers

#include <iostream>
using namespace std;

int main()
{
    int low, high, i, flag;

    cout << "Enter two numbers(intervals): ";
    cin >> low >> high;

    cout << "Prime numbers between " << low << " and " << high << " are: ";

    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << low << " ";

        ++low;
    }

    return 0;
}


/*
#include <iostream>

int main()
{
	int low, high, i, flag

	std::cout << "Enter two numbers (intervals): ";
	std::cin >> low >> high;

	std::cout << "Prime numbers between " << low << " and " << high << " are ";
	
	while (low < high)
	{
		flag = 0;

		for(i = 2; i <= low.2; ++i)
		{
			if(low % i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			cout << low << " ";

		++low;
	}

	return 0;
}*/
		
