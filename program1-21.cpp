// Write a C++ function that converts a 2-digit octal number into binary number and prints the binary equivalent

#include <iostream>

void octobin(int oct)
{
	long binn = 0;
	int A[6];
	// each octal is converted ito 3 bits thus for 2 octal digits - space for 6 bits hs been reserved here
	int d1, d2, q, r;
	d1 = oct % 10;
	d2 = oct / 10;
	for (int i = 0; i < 6; ++i)
	{
		A[i] = 0;
	}
	// storing remainders of one's octal digit in the array
	for (int i = 0; i < 3; ++i)
	{
		q = d1 / 2;
		r = d1 % 2;
		A[i] = r;
		d1 = q;
	}
	// storing remainders of ten's octal digit in the array
	for (int i = 3; i < 6; ++i)
	{
		q = d2 / 2;
		r = d2 % 2;
		A[i] = r;
		d2 = q;
	}
	// obtaining binary number from the remainders
	for (int i = 5; i >= 0; --i)
	{
		binn *= 10;
		binn += A[i];
	}
	std::cout << "Binary: " << binn << "\n";
	return ;
}

int main()
{
	int oct;
	std::cout << "Enter octal number: ";
	std::cin >> oct;
	octobin(oct);
	return 0;
}
