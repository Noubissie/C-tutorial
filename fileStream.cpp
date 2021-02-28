#include <iostream>
#include <fstream>
#include <string>


int main(){
    std::ofstream file;
    std::ifstream fileIn;
    std::string name;
    file.open("hello.txt", std::ios::app);
    fileIn.open("hello.txt");
    // fileIn >> name ;
    std::getline(fileIn,name);
    std::cout << name << std::endl;
    
    file << "john landry" <<std::endl;

    file.close();
}

// /(?=[A-Z])/g