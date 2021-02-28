// using standard g++ -std=c++2a
#include <iostream>
#include <vector>
#include <string>
// #include <thread>
#include <memory>


class Comm{
    public:
        std::string name;
        int priority;
        std::vector<std::string> resources;

        int i = 0;
        Comm(std::string n, int p, std::vector<std::string> r):
            name(n),priority(p),resources(r){
                i++;
            };
        virtual ~Comm(){
            std::cout << "this is a virtual destructor\n";
            printf("\n%i\n",i);
        };

        Comm(const Comm& other){
            std::cout << "this is a copy\n";
        }

        Comm(const Comm&& other){
            std::cout << "this is a move";
        }
        void Print(){
            std::cout <<"[Comm]" << name << " .Priority:" << priority << " ,resources: ";

            for(auto r : resources){
                std::cout << r << " ";
            }
            std::cout << std::endl;
        };
        bool ActivateComm(){
             
            return true;
        }

};

int main(){

    // Comm* communication = new Comm("name1", 2, {"1","2","3"});
    // Comm* b = communication;

    // std::shared_ptr<Comm> communication = std::make_shared<Comm>("name1", 2, {"1","2","3"});
    {
        std::vector<std::string> resourcesMain = {"2GB","ssd","200MB"};
        std::shared_ptr<Comm> communication = std::make_shared<Comm>("landry",1,resourcesMain);
    }// std::shared_ptr<Comm> communicaion = std::make_shared<Comm>("landry",1,resourcesMain);
    std::shared_ptr<Comm> b = communication;

    // Comm a = Comm("landry",1,{"2GB","ssd","200MB"});
    // Comm c = a;
    // a->Print();
    // delete a;
    // std::thread Threading;
    
    
}