#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>

int main(){
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout << "*" << " ";
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_taken = duration_cast<duration<double>>(t2 - t1);
    std::cout << "Time taken: " << time_taken.count() << std::endl;
    std::cout << std::endl;
    return 0;
}