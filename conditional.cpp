#include <iostream>

int main() {
    int x = 2;
    x > 1 ? x = 10 : x = 0;
    std::cout << x << std::endl;
    if (true) std::cout << 'something' << std::endl;
}