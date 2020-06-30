#include <iostream>

using namespace std;

// Global variable declaration:
int g;

int main()
{
    // Local variable declaration:
    int a, b;

    // actual initialization:
    a = 10;
    b = 20;
    g = a + b;

    std::cout << g << std::endl;

    return 0;
}
