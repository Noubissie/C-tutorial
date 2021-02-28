#include <iostream>
#include <thread>

void testThread();

int main(){
    std::thread worker(testThread);
    std::cout << "that how we declare threading" <<std::endl;
    if(worker.joinable()){
        worker.join();
    }
    
}

void testThread(){
    while(true){
            std::cout << "this is the thread" <<std::endl;
    }
        
}