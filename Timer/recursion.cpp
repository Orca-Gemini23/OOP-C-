#include <iostream>
#include <ratio>
#include <ctime>
#include <chrono>


double func(double fact){
    if(fact == 0){
        return fact;
    }
    else if(fact == 1){
        return fact;
    }
    return fact * func(fact - 1);
}

int main(){
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    std::cout << func(12) << std::endl;
    std::cout << func(2) << std::endl;
    std::cout << func(32) << std::endl;
    std::cout << func(15) << std::endl;
    std::cout << func(14) << std::endl;
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
    std::cout << "Time taken: " << time_span.count() << std::endl;
    return 0;

}