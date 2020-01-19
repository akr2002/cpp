#include <iostream>

int main()
{
	int b[5];
	for (int i = 0; i < 0xfff; std::cout << b[i++] << " ");
	std::cout << "\n";
	int *a = new int[5];
	for (int i = 0; i < 5; std::cout << a[i++] << " ");
	std::cout << "\n";
	delete[] a;
	return 0;
}
