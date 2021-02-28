#include <iostream>
#include <string>

template <typename T>
void Log(T output){
    std::cout << output << std::endl;
}

class Name{
    private:
        std::string name;
        int age;
    public:
        explicit Name(const std::string& name, int age=0)
            : name(name),age(age){
                Log(name);
                Log(age);
        }
        ~Name(){
            Log("Destructure called");
        }


};

int main(){
    Name* a = new Name("Landry",27);

    delete a;
    
}