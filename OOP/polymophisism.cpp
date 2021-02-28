#include <iostream>
#include <vector>

class Sperm{

    public:
        std::vector<int> man1(){
            return {1};
        } 
};
class Woman : public Sperm{

    public:

        std::vector<int> woman1(){
            return {2};
        } 
};

class Child : public Woman{

    public:
        std::vector<int> child1(){
            return {1,2,3};
        }
};

int main(){

    Child c;

    std::cout << "father:: "  << c.man1()[0] <<std::endl;

    std::cout << "Woman:: "  << c.woman1()[0] <<std::endl;

    std::cout << "child:: "  << c.child1()[2] <<std::endl;

}