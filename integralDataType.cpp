#include <iostream>
#include <climits>

int main(){
    char x = 120;
    std::cout << (int)x <<"\n"<<std::endl; // casting: the ability to project another data type on another data type
    std::cout << "Type of integral data type \n short \n unsigned short \n int \n unsigned int\n long \n unsigned long \n long long \n unsigned long long \n char \n unsigned char \n" <<std::endl;
    std::cout << "sizeof short: " << sizeof(short)*8 << " bits, max_value: " << SHRT_MAX <<std::endl;
    std::cout << "sizeof unsigned short: " << sizeof(unsigned short)*8 << " bits, max_value: " << USHRT_MAX <<std::endl;
    std::cout << "sizeof int: " << sizeof(int)*8 << " bits, max_value: " << INT_MAX <<std::endl;
    std::cout << "sizeof unsigned int: " << sizeof(int)*8 << " bits, max_value: " << UINT_MAX <<std::endl;
    std::cout << "sizeof long: " << sizeof(long)*8 << " bits, max_value: " << LONG_MAX <<std::endl;
    std::cout << "sizeof unsigned long: " << sizeof(unsigned long)*8 << " bits, max_value: " << ULONG_MAX <<std::endl;
    std::cout << "sizeof unsigned long: " << sizeof(long long)*8 << " bits, max_value: " << LLONG_MAX <<std::endl;
    std::cout << "sizeof unsigned long long: " << sizeof(unsigned long long)*8 << " bits, max_value: " << ULLONG_MAX <<std::endl;
    return 0;

}
