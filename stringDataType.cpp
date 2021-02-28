#include <iostream>
#include <string>

int main(){
    std::string name ;
    std::cout << "enter your name"<<std::endl;

    getline(std::cin, name);
    

    std::cout << "your name is "<<name<<std::endl;
}