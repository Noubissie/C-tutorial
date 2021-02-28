#include <iostream>

template <typename T>
void Log(T output){
    std::cout << output << std::endl;
}

int main(){
    const int a=2;
    Log(a);


    //u can't change the pointer to b but u can change the value of b
    const char*  b = "the";
    b="those";
    Log(b);

    // u can't change neither the pointer to c or the value of c;
    const char* const c = "the";
    // b="those";
    Log(c);
    // a=4;


}