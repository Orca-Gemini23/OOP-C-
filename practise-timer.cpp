#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>

void solve(){
    int a = 5, b = 6;
    int result = a + b;
    std::cout <<  result << std::endl;
}

int main(){
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    solve();
    
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    duration<double> time_cast = duration_cast<duration<double>>(t2 - t1);
    std::cout << "Time taken: " << time_cast << std::endl;
    std::cout << std::endl;
    return 0;
}