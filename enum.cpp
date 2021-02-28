#include <iostream>
#include <string>

int main(){
    enum  Name{landry,placid,noubissie};
    std::string namer = "hello this is a namer";
    Name Anne=placid;
    int a=2;
    std::cout << " name:: " << Anne;
    std::cout << "namer:: " <<  namer.size();
    std::cout << " namer:: " << namer.length();

     a != 2 ? std::cout << " namer:: " << namer.length() : std::cout << "\n just trying to use ternary operators\n";
}