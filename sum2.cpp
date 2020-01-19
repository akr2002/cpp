#include <iostream>
#include <math.h>

int main()
{
    double n, s, i = 1, k = 0, sign = 1, c = 2, a;

    std::cout << "Enter range: ";
    std::cin >> n;

    while (i <= n)
    {
        //++i;
        //s = s + (++k * pow((++i), -2)) * sign;
        //if (i % 2 == 0)
        //    a = ((++k * pow(i, -c)));// - (++k / pow(++i, ++c)));
        //    c--;
        //    s += a;
        //sign = sign * -1;

        a = (i / ((++i) * i)) - (i / ((++i) * i * i));
        s += a;
    }

    std::cout << "Sum upto " << n << " is " << s << std::endl;

    return 0;
}