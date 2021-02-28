#include <iostream>
#include <string>
#include <vector>


template <typename T> 
void nameFunc(T &a){

    std::cout << "\na:: " << a ;

}

int main(){
    std::string name;
    name = "\nlandry placid \n";
    nameFunc(name);
    int number = 9;
    nameFunc(number);

    return 0;
}