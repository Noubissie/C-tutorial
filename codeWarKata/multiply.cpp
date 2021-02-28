#include <iostream>
#include <functional>

std::multiplies<int> multiply;

// class Multiple  {
//     public:
//         void print(){
//             std::cout << "this is a print" <<std::endl;
//         }
// };
int main(){
    std::cout << multiply(4,2) <<std::endl;
    printf("%i\n",multiply(4,2));
}