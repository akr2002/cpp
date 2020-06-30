#include <iostream>

// Definition of function doPrint()
void doPrint() // doPrint() is the called  function in this example
{
    std::cout << "In doPrint()" << std::endl;
}

// Definiton of function main()
int main()
{
    std::cout << "Starting main()" << std::endl;
    doPrint(); // Interrupt main() by making a function call to doPrint(). main() is the caller
    std::cout << "Ending main()" << std::endl;

    return 0;
}