#include <iostream>
#include <vector>
#include <string>

class User
{
    std::string status = "Gold";

    public:
        std::string firstname;
        std::string lastname;

    User(std::string firstN, std::string lastN){
        this->firstname = firstN;
        this->lastname = lastN;
    };

    ~User(){
        std::cout << "\n am the destructor \n" <<std::endl;
    };
};

int main(){
    User me("landry","noubissie");

    std::cout << me.firstname << std::endl;
}