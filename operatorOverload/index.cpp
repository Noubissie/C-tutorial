#include <iostream>
#include <string>
// #include <thread>

template <typename T>
void Log(T &a){
    std::cout << a << std::endl;
}

struct p{
    int x;
    int y;
};

class Vector2{
    private:
        int x, y;
    public:
        Vector2(int x, int y)
        : x(x),y(y){
           
        }
        Vector2 operator*(Vector2 &other){
            return Vector2(x*other.x, y*other.y);
        }
        Vector2 operator+(Vector2 &other){
            return Vector2(x+other.x, y+other.y);
        }
        
        p getValue(){
            return {x,y};
        }

};

std::ostream& operator<<(std::ostream& stream, Vector2 other){
    return(stream << other.getValue().x << " " << other.getValue().y <<std::endl);
}

int main(){
    Vector2 a(2,4);
    Vector2 b(3,4);
    Vector2 v(2,2);
    //NOT carrying out operator precedent
    // Vector2 c = a+b*v;
    Vector2 c = v*a+b;
    std::cout << c ;
}