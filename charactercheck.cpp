#include <iostream>

int main()
{
    char ch;

    std::cout << "Enter any character: ";
    std::cin >> ch;

    // Alphabet checking condition
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        std::cout << ch << " is an alphabet.";
    }
    else if ( ch >= '0' && ch <= '9')
    {
        std::cout << ch << " is a number.";
    }
    else 
    {
        std::cout << ch << " is a special character.";
    }

    return 0;
}
