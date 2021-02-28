#include <iostream>
#include <string>
template <typename T>
void Log(T output){
    std::cout << output <<std::endl;
}

int main(){

    auto a = [](std::string number)->std::string{return number;};
    Log(a("2"));
}