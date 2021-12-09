#include <iostream>
using namespace std;

void increment(int* ptr);

int main(){
    int a = 10;
    increment(&a);
    cout << a << endl;
    return 0;
}

void increment(int* ptr){
    *ptr = *ptr + 1;
}
// each function has a stack frame.
// also all the parameter and the arguements