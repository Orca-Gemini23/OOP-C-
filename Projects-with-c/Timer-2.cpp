#include <iostream>
#include <chrono>
#include <ctime>
  
// Function to calculate
// Fibonacci series
long fibonacci(unsigned n)
{
    if (n < 2) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
  
int main()
{
    // Using time point and system_clock
    std::chrono::time_point<std::chrono::system_clock> start, end;
  
    start = std::chrono::system_clock::now();
    std::cout << "f(42) = " << fibonacci(42) << '\n';
    end = std::chrono::system_clock::now();
  
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
  
    std::cout << "finished computation at " << std::ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s\n";
}

/* 
system_clock-It is the current time according  to the system (regular clock which we see on the toolbar of the computer)
 It is written as- std::chrono::system_clock 

steady_clock-It is a monotonic clock that will never be adjusted
It goes at a uniform rate. It is written as- std::chrono::steady_clock

high_resolution_clock– It provides the smallest possible tick period. It is written as-std::chrono::high_resolution_clock