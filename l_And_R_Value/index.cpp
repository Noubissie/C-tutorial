#include <iostrean>

//Rvalues are not stored in memory and are mostly on operations carried out to produce an
//Rvalue
//Lvalue are stored in memory

template <typename T>
void Log(T output){
    std::cout << output <<std::endl;
}

int main(){
    int Lvalue1 = 12;
    int Lvalue2 = 10;
    int Lvalue = Lvalue1 + Lvalue2 
}