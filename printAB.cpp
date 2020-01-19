#include <iostream>

void printA()
{
    std::cout << "A" << std::endl;
}

void printB()
{
    std::cout << "B" << std::endl;
}

// function printAB() calls both printA() and printB()
void printAB()
{
    printA();
    printB();
}

// Defintion of main()
int main()
{
    std::cout << "Starting main()" << std::endl;
    printAB();
    std::cout << "Ending main()" << std::endl;
    return 0;
}
