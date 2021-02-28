#include <iostream>

template <typename T>
void Log(const T output){
    std::cout << output <<std::endl;
}

struct Entity{
    int x,y;
};

int main(){
    int a = 50;
    // double b = *(double*)&a;
    // int c = 13;
    Entity e = {5,8};
    // int y = *(int*)((int*)&e+1);
    int y = *(int*)((char*)&e+1);
    Log(y);
    // Log(a);
    // Log(b);
    // Log(c);
}
