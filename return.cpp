#include <iostream>

// int means the function returns an integer value to the caller
int return5()
{
    // this function returns an integer, so a return statement is needed
    return 5; // we're going to return integer value 5 back to the caller of this function
}

int main()
{
    std::cout << return5() << std::endl; // prints 5
    std::cout << return5() + 2 << std::endl; // prints 7

    return5(); // okay: the value 5 is returned, but is ignored since main() doesn't do anything with it

    return 0;
}
