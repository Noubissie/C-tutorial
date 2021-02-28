#include <iostream>

template <typename T>
void Log(T output){
    std::cout << output << std::endl;
}


class World{
    private:
        mutable int g;
        int x,y;
        int *z,*h;
    public:
        // can't modifier private class variables
        int getx() const{
            // x=2;
            return x;
        }
        // mutable permites the change of a private class variable in a const method
        int getG() const{
            g=2;
            return g;
        }

        const int* const getx2() const{
            // x=2;
            return z;
        }

        int setX(){
            x=2;
            return x;
        }
};

int main(){
    World omega;
    Log(omega.getG());

}