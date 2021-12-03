#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

class X{
    public:
    int a;
    void f(int b){
       cout << "The value of b is: " << b << endl; 
    }
};

int main(){
    int X::*ptiptr = &X::a; // declare pointer to date member
    void (X::*ptfptr) (int) = &X::f;

    X x;
    x.*ptiptr = 10; 
    cout << "Value of a is: " << x.*ptiptr << endl;
    (x.*ptfptr) (20);
    return 0;
}