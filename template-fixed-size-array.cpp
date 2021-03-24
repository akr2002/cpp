// Defining template for functions that accept fixed-size arrays
#include <bits/c++config.h>
#include <iostream>

template<typename T, std::size_t N>
T average(const T (&array)[N]);

template<typename T, std::size_t N>
T average(const T (&array)[N])
{
    T sum {};   // Accumulate total in here
    for (std::size_t i {}; i < N; ++i)
    {
        sum += array[i];    // Sum array elements
    }

    return sum / N; // Return average
}

int main()
{
    double doubles[2] { 1.0, 2.0 };
    std::cout << average(doubles) << std::endl;

    double moreDoubles[] { 1.0, 2.0, 3.0, 4.0 };
    std::cout << average(moreDoubles) << std::endl;

    // double* pointer = doubles
    // std::cout << average(pointer) << std::endl;  /* won't complie */

    std::cout << average( { 1.0, 2.0, 3.0, 4.0 } ) << std::endl;

    int ints[] = { 1, 2, 3, 4 };
    std::cout << average(ints) << std::endl;

    return 0;
}