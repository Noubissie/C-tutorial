#include <iostream>
#include <vector> //list,queue ,listArray data structure
#include <array> //array templating library
#include <string>

int main(){
    std::vector<int> data = {1,2,3,4};
    std::array<std::string,4> name = {"landry","gobenus","cesar","angela"};
    for(int n : data){
        std::cout << "\n" << n << "\n" << std::endl;
    }
    for(std::string n : name){
        std::cout << "\n" << n << "\n" <<std::endl;
    }  
}
