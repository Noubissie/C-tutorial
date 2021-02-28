#include <iostream>
#include <memory>
template <typename T>
void Log(T output){
    std::cout << output <<std::endl;
}
class Entity{
    public:
        float x,y,z;
        Entity(float x, float y,float z)
            : x(x), y(y), z(z){
            Log("this is the constructor");
        }
        Entity(const Entity& other){
            Log("this is a copy constructor");
        }
        virtual ~Entity(){
            Log("this is a destructor");
        }
};

int main(){
    {
        std::shared_ptr<Entity> a = std::make_shared<Entity>(1,2,3);
        std::shared_ptr<Entity> b = a;
        Log(b->x);
    }
    // Entity c ;
    // Entity d = c; 

    // float offset = (float)&((Entity*)nullptr)->z;
    // Log(offset);

}