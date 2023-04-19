#include <iostream>

void doSomething() {
    std::cout << "Functions are great!!\n";
}

void swap(int &i, int &j){
    int temp = i;
    i = j;
    j = temp;
}

int main() {
    int first = 10;
    int second = 20;

    std::cout << "before swap: " << first << " " << second << std::endl;

    swap(first, second);

    std::cout << "after swap: " << first << " " << second << std::endl;
}