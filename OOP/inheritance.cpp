#include <iostream>
#include <string>

class FirstName{

    public:
        std::string name1(){
            std::cout << "landry" << std::endl;
            return "landry";
        };
};

class MiddleName{

    public:
        std::string name2(){
            std::cout << "placid" << std::endl;
            return "placid";
        };
};

class LastName : public FirstName, public MiddleName{
    
    public:
        std::string name3(){
            std::cout << "noubissie" << std::endl;
            return "Noubissie";
        };

};

class Polymophism : public LastName{
    
    public:
        std::string name3() {
            std::cout << "virtual function that replace an inherited function" << std::endl;
            return "this is a virtual function";
        };
        std::string name4(){
            // std::cout << "noubissie" << std::endl;
            return "has access to all the other public methods of each class";
        };

};



int main(){

    // LastName CompletName;
    LastName Name;
    Polymophism CompletName;

    std::cout << "Polymophism.name1:: " << CompletName.name1() <<std::endl;
    std::cout << "Polymophism.name:: " << CompletName.name2() << "\n\n" <<std::endl;

    std::cout << "Name.name:: " << Name.name3() << "\n\n" <<std::endl;

    std::cout << "Polymophism.name3:: " << CompletName.name3() <<std::endl;
    std::cout << "Polymophism.name3:: " << CompletName.name4() <<std::endl;
}