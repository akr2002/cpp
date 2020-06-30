#include <iostream>
#include <stdlib.h>

int main()
{
    system ("cls")
    float sub1, sub2, sub3, marks, perc;
    std::cout << "Enter your marks obtained in 3 subjects: ";
    std::cin >> sub1 >> sub2 >> sub3;
    marks = sub1 + sub2 + sub3;
    perc = (marks/300) * 100;
    std::cout << "\n" << "The percentage marks are: " << perc << "%";

    return 0;
}