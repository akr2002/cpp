#include <iostream>

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0, i;

    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i);
    {
        // Prints first two numbers
        if (i == 1)
        {
            std::cout << " " << t1;
            //continue;
        }

        if (i == 2)
        {
            std::cout << t2 << " ";
            //continue;
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        std::cout << nextTerm << " ";
    }

    return 0;
}
