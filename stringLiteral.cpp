#include <iostream>
#include <string>
#include <stdlib.h>

template <typename T>

void log(T output){
    // auto out = &output ;
    // std::cout << out << std::endl;
    std::cout << output << std::endl;
}

int main(){
    using namespace std::string_literals;
    // the s added is a string literal used to add or concat strings together
    std::string name0 = "landry "s + "placid";
    // std::u32string Sname32 = U"landry"s + U" placid";
    std::string name1 = R"(
    landry 
    placid
    noubissie)";

    const char* name = "Landry";
    const char8_t* name8 = u8"Landry";
    const wchar_t* nameW = L"Landry";
    const char16_t* name16 = u"Landry";
    const char32_t* name32 = U"Landry";

    log(name0);
    // log(Sname32);
    log(name1);
    log(name);
    log(name8);
    log(nameW);
    log(name16);
    log(name32);

}