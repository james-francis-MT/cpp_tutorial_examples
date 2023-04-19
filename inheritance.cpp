#include <iostream>
#include <string>

class Animal{
    private:
    std::string gender;
    int age;

    public:
    Animal(std::string newGender, int newAge)
        : gender(newGender), age(newAge) {}
};

class Dog : public Animal {
    private:
    std::string breed;

    public:
    Dog(std::string newGender, int newAge, std::string newBreed)
        : Animal(newGender, newAge), breed(newBreed) {}

    void sound(){
        std::cout << "Woof\n";
    }
};

int main(){
    Dog buddy("male", 11, "husky");

    buddy.sound();

    return 0;
}