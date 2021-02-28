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

    std::shared_ptr<Entity> b;
    
    {
        std::shared_ptr<Entity> a = std::make_shared<Entity>();
        b=a;
        // std::unique_ptr<Entity> b = a;  // 
        a->print();
    }
    
    Log("\nthis is before shared_ptr above scope because the \
      reference is kept to be use by b shared_ptr, this is a form of garbage collectot in js\n");
    // Entity* b = new Entity(); 
    
    // delete b;
}