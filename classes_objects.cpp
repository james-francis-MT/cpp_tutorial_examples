#include <string>
#include <iostream>

class School {
public:
    std::string name;
    int age;

    void banner();
};

void School::banner(){
    std::cout << name << " is " << age << " years old.\n";
}

int main(){
    School codecademy;
    codecademy.name = "jeff";
    codecademy.age = 10;
    codecademy.banner();
}