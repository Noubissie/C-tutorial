#include <iostream>
#include <thread>
#include <mutex>

void testThread();

int amount = 0;
std::mutex m;
int main(){
    std::thread worker1(testThread);
    std::thread worker2(testThread);
    std::cout << "that how we declare threading\n" <<std::endl;
    // if(worker.joinable()){
        worker1.join();
        worker2.join();
    // }
    
}

void testThread(){
    // while(true){
        m.lock();
            ++amount;
            std::cout << "this is the thread :: " << amount <<std::endl;
        m.unlock();
            
    // }
        
}