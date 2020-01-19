#include <iostream>

using namespace std;

// variable declaration
extern int a, b;
extern int c;
extern float f;

int main()
{
    // variable definition
    int a, b;
    int c;
    float f;

    // actual initialization
    a = 10;
    b = 20;
    c = a + b;

    std::cout << c << std::endl;

    f = 70.0/3.0;
    std::cout << f << std::endl;

    return 0;
}
