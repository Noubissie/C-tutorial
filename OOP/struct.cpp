#include <iostream>
#include <string>

struct User{
        std::string firstname;
        std::string familyname;
        std::string status;
        std::string getAncestor(){
            return ancestor;
        }
        private:
            std::string ancestor = "Noubissie John";
};

int main(){
    User user;
    user.firstname = "landry\n";

    std::cout << user.familyname << std::endl;

    std::cout << user.getAncestor() << std::endl;

    // std::cout << user.ancestor() << std::endl;
    return 0;
}