#include <unordered_set>
#include <set>
#include <iostream>

int main(){
    std::unordered_set<int> primes({2,3,5,7});
    
    // primes.insert(2);
    // primes.insert(3);
    // primes.insert(3);

    // std::cout << primes.erase(3);
    // std::cout << primes.size();

    // if(primes.count(4)){
    //     std::cout << "4 is prime";
    // } else {
    //     std::cout << "4 is not prime";
    // }

    std::unordered_set<int> unordered({4,2,7,1,3});
    std::cout << "unordered set: ";
    for(int n : unordered){
        std::cout << n << " ";
    }

    std::cout << "\n";

    std::set<int> ordered({4,2,7,1,3});
    std::cout << "ordered set: ";
    for(int n : ordered){
        std::cout << n << " ";
    }
}