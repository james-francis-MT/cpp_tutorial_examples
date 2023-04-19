#include <string>
#include <iostream>

class Clock {
    private:
    int time = 1200;
    
    public:
    int getTime(){
        return time;
    }

    void setTime(int newTime){
        time = newTime;
    }
};

int main(){
    Clock alarm;
    alarm.setTime(930);
    std::cout << alarm.getTime();
}