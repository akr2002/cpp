#include <iostream>
#include <cstdlib>
using std::cin;
int main()
{
    //clear();
    std::system("cls");

    int max(int, int);

    int a, b, ret;

    std::cout << "Enter two numbers: ";
    cin >> a >> b;
    ret = max(a, b);
    std::cout << "The larger number is " << ret << std::endl;
    std::cin.ignore();
    std::cin.get();
    return 0;
}

int max(int num1, int num2)
{
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}

void clear() {
    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
    std::cout << "\x1B[2J\x1B[H";
}