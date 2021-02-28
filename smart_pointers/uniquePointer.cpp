#include <iostream>
#include <memory>


template <typename T>
void Log(T output){
    std::cout << output << std::endl;
}

class Entity{
    public:
        Entity(){
            Log("this is the constructor");
        }
        virtual ~Entity(){
            Log("this is the destructor");
        }
        void print(){
            Log("this is a print method");
        }
};

int main(){
    
    {
        std::unique_ptr<Entity> a = std::make_unique<Entity>();

        // std::unique_ptr<Entity> b = a;  // 
        a->print();
    }
    
    Log("\nthis is after unique_ptr scope");
    // Entity* b = new Entity();
    // delete b;
}