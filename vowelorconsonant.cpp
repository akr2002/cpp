#include <iostream>
int main()
{
    char c;
    int isLowerCaseVowel, isUpperCaseVowel;

    std::cout << "Enter an alphabet: ";
    std::cin >> c;

    // evaluates to 1 (true) if c is a lowercase vowel
    isLowerCaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an upercase vowel
    isUpperCaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if either isLowerCaseVowel or is UpperCaseVowel us true
    if (isLowerCaseVowel || isUpperCaseVowel)
        std::cout << c << " is a vowel.";
    else
        std::cout << c << " is a consonant.";

    return 0;
}