#include <iostream>
#include <limits>

int main()
{
    long int value = 1238723234243;

    std::cout << value << std::endl;

    std::cout << INT_MAX << std::endl;
    std::cout << value << " size of value: " << sizeof(value) << std::endl;

    return 0;
};