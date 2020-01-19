#include <iostream>

using namespace std;

int main()
{
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    std::cout << "Line 1 - Value of c is : " << c << std::endl;

    c = a - b;
    std::cout << "Line 2 - Value od c is : " << c << std::endl;

    c = a * b;
    std::cout << "Line 3 - Value of c is : " << c << std::endl;

    c = a / b;
    std::cout << "Line 4 - Value of c is : " << c << std::endl;

    c = a % b;
    std::cout << "Line 5 - Value of c is : " << c << std::endl;

    c = a++;
    std::cout << "Line 6 - Value of c is : " << c << std::endl;

    c = a--;
    std::cout << "Line 6 - Value of c is : " << c << std::endl;

    return 0;
}