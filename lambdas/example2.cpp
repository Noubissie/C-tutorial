#include <iostream>
#include <typeinfo>


template <typename T> std::string type_name();
int main(){
    int id=0;
    auto fo = [&id]() mutable{printf("%i\n",++id);};
    // const int ci = 0;
    // std::cout << type_name<decltype(ci)>() << '\n';

    auto f1 = [id]() mutable{printf("%i\n",++id);};
    // auto fo = [&id]() mutable{printf("%i\n",++id);};
    // std::cout << typeid(fo()).name() << "\n";
    f1();
    printf("%i\n",id);
    fo();
}