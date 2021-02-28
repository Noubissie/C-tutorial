#include <iostream>
extern int numberImport ;
extern int staticnumber;  // can't link up static methods.
int main(){
    int a[] = {1,2,3};
    for(auto i: a){
        std::cout << i <<"\t" <<std::endl;
    };
    std::cout << "numberImport: " << numberImport <<std::endl;

    // std::cout << "staticnumber: " << staticnumber <<std::endl;
}