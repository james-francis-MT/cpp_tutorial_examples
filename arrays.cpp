#include <iostream>

int main(){
    char grade[] = {'A', 'B', 'C', 'D', 'F'};

    std::cout << grade[0] << std::endl;;

    int table[3][5] = {
        {0,1,2,3,4},
        {5,6,7,8,9},
        {10,11,12,13,14}
    };

    std::cout << table[2][1] << std::endl;

    int fibonacci[5] = {0,1,1,2,3};

    for(int i = 0; i < 5; i++){
        std::cout << fibonacci[i];
    }

    std::cout << std::endl;

    for (int num : fibonacci){
        std::cout << num;
    }

    std::cout << std::endl;

    char game[3][3] = {
        {'x', 'o', 'o'},
        {'o', 'x', 'x'},
        {'o', 'o', 'x'}
    };

    for(int i = 0; i < 3; i++){
        for(int j =0; j < 3; j++){
            std::cout << game[i][j];
        }
        std::cout << std::endl;
    }
}