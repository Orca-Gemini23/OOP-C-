#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

class X{
    public:
    int a;
    void f(int b){
        cout << "Value of b is: " << b << endl;
    }
};

int main(){
    int X::* ptiptr = &X :: a; // declare pointer to data member;
    // the ptiptr acts like a class member and is invoked with a class member
    // X::* means "pointer to a member of X class"
    // &X::a means "the address of the a member of X class"

    void (X::* ptfptr)(int) = &X :: f;
    // declare a pointer to member function.

    X x; // object of class X
    x.*ptiptr = 10;
    cout << "The value of a is " << x.*ptiptr << endl;

    (x.*ptfptr)(20); // call member function

    return 0;
}