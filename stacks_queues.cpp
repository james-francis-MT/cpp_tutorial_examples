#include <iostream>
#include <stack>
#include <queue>

int main(){
    std::stack<int> plates;

    plates.push(10);
    plates.push(8);
    plates.push(5);

    plates.pop();

    std::cout << plates.top();
    std::cout << plates.size();

    std::queue<std::string> line;

    line.push("Amy");
    line.push("Bella");
    line.push("Chloe");

    line.pop();
}