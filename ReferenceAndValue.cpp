#include <iostream>
#include <vector>

void parse_by_value(std::vector<int> data){
    data.push_back(7);
    for (int i=0; i<data.size();i++){
        std::cout << data[i] << "\t";
    }
    std::cout <<"\n";
    
}

void parse_by_reference(std::vector<int> &data){
    data.push_back(7);
    for (int i=0; i<data.size();i++){
        std::cout << data[i] << "\t";
    }
    std::cout <<"\n";
    
}

int main(){
    std::vector<int> data = {1,2,3,5};

    std::cout << "\n pass by value:\n";
    parse_by_value(data);
    parse_by_value(data);
    parse_by_value(data);
    std::cout << "\n pass by Reference:\n";
    parse_by_reference(data);
    parse_by_reference(data);
    parse_by_reference(data);
}