#include <iostream>
#include <string>

namespace marks{
    std::string name = "landry placid";
    double Biology(){
        int coef = 4;
        double mark =18;
        return coef*mark;
    }
}

// using namespace marks;

int main(){
    std::cout << marks::Biology() <<std::endl;
    std::cout << marks::name << std::endl;
}