#include <iostream>
#include <string>

class House{
    private:
    std::string location;
    int rooms;

    public:
    House(std::string loc = "New York", int num = 5){
        location = loc;
        rooms = num;
    }

    House(int num){
        location = "New York";
        rooms = num;
    }

    void summary(){
        std::cout << location << " house with " << rooms << " rooms.\n";
    }

    ~House(){
        std::cout << "Moved away from " << location;
    }
};

int main(){
    House redHouse;

    redHouse.summary();

    House greenHouse("Boston", 3);

    greenHouse.summary();

    House numberHouse(10);

    numberHouse.summary();

    return 1;
}