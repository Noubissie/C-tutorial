#include <iostream>
#include <memory>

// Weak pointer are use with smart pointers but can't be used outside the scope in which the shared pointer is defined

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

    std::weak_ptr<Entity> b;
    
    {
        std::shared_ptr<Entity> a = std::make_shared<Entity>();
        b=a;
        // std::unique_ptr<Entity> b = a;  // 
        a->print();
    }
    
    Log("\nthis is after shared_ptr above scope(destructor) because weak pointer don't maintain the reference\
           ,this is a form of deamon thread( in this casse deamon pointer)\
           that get's eliminate once the caller scope is exited\n");
    // Entity* b = new Entity();
    // delete b;
}