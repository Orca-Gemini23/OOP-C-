#include <iostream>
using namespace std;

int main(){
    int a; // integer
    int *p; // pointer to integer 
    // also p points to a;
    a = 8;
    p = &a; // pointing to the value
    // &a is address of a.
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;
    return 0;
}
