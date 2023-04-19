#include <iostream>
#include <unordered_map>
#include <map>

int main(){
    std::unordered_map<std::string, int> country_codes(
        {{"India", 91},
        {"Italy", 39}}
    );

    country_codes.insert({"Thailand", 66});
    country_codes.insert({"Peru", 51});
    country_codes.insert({"Peru", 9});

    country_codes["England"] = 21;

    country_codes.erase("Thailand");

    std::cout << country_codes.at("England");

    for(auto it : country_codes){
        std::cout << it.first << " " << it.second << "\n";
    }

    return 0;
}