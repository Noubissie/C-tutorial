
#include <iostream>
#include <climits>
// using std::cout;
// using std::endl;
int hope(){
    int number;
    std::cout << "enter a number"<< std::endl;
    std::cin >> number;
    std::cout << "your number is " << number <<std::endl;
    for(int i=0;i<10;i++){
        number +=i;
    }
    return number;
}

int main(){
    // int name;
    // std::cout << "hello world \n" << std::endl;
    unsigned int name = 1;
    std::cout << name;
    // double hop = hope();
    // std::cout << hop<<std::endl;
    std::cout << "sizeof short " << sizeof(short)*8 << " byte " << "min::" << SHRT_MIN << " max:: " << SHRT_MAX << std::endl;
    std::cout << "sizeof unsigned short " << sizeof(unsigned short)*8 << " byte " << "min::"  << " max:: " << USHRT_MAX << std::endl;
    
    return 1;
}

