#include <iostream>
#include <vector>

int main(){
    std::vector<int> data = {1,2,3};

    std::cout << "data:: " << data[1] << "\t size:: " << data.size() <<"\n" <<std::endl;

    data.push_back(12);

    std::cout << "data:: " << data[3] << "\t size:: " << data.size() <<std::endl;

    // std::vector<int> data = {1,2,3};
    // data.push_back(12);
    // std::cout << data[3] <<std::endl;
}