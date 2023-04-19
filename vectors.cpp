#include <vector>
#include <iostream>

int main(){
    std::vector<char> alphabet = {'a', 'b', 'c'};

    std::cout << alphabet[1];
    std::cout << alphabet.front();
    std::cout << alphabet.back();
    std::cout << alphabet.size();

    std::vector<int> weights;
    weights.push_back(25);
    weights.push_back(45);

    weights.pop_back();

    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    for(char letter : vowels){
        std::cout << letter << " ";
    }
}