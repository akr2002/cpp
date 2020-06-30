#include <iostream>

// getValueFromUser will read a value from the user, and return  it to the caller
int getValueFromUser()
{
    std::cout << "Enter an integer: "; // ask user for an integer
    int a; // allocate a variable to hold the user input 
    std::cin >> a; // get user input from console and store in variable a
    return a; // return this value to the finction's caller (main)
}

int main()
{
    int x = getValueFromUser(); // first call to getValueFromUser
    int y = getValueFromUser(); // second call to getValueFromUser

    std::cout << x << " + " << y << " = " << x + y << std::endl;

    return 0;
}
