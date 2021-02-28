//Pointers
#include <iostream>
#include <string>

// template <typename T,int N>
template <typename T>
void log(T a){
    std::cout << a <<std::endl;
}



int main(){
    // pointer*  to an address
    // *pointer dereference to another address.
    const char* a = "hello";
    log(a);

    int number = 8;
    int* ptr = &number;

    std::cout << &number << "\t" << *ptr +1<<std::endl;
}