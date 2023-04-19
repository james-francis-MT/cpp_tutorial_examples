#include <iostream>

int main() {
    int x = 1;
    while(x <= 5){
        std::cout << x++ << std::endl;
    }
    int list[5] = {1,2,3,4,5};
    for (auto number : list) {
        std::cout << number;
    }
    std::cout << "\n";
    
    return 0;
}