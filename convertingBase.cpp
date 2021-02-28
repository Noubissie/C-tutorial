#include <iostream>
#include <cmath>

int main(){
    int numberDec = 30;
    int numberHex = 0x30; //converting from decimal to hexadecimal
    int numberOct = 030; //converting from decimal to Octaldecimal

    std::cout << "numberDec:: " << numberDec <<std::endl;
    std::cout << "numberHex::" << numberHex <<std::endl;
    std::cout << "numberOct::" << numberOct <<std::endl;


    std::cout << "numberDec:: " << numberDec <<std::endl;
    std::cout << "numberHex::" <<std::hex << numberDec <<std::endl; //Finding equivalence in hex
    std::cout << "numberOct::" <<std::oct << numberDec <<std::endl; //Finding equivalence in oct

}