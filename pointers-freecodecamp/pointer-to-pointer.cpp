#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int x = 5;
    int *p;

    p = &x;
    *p = 6;

    int **q; // var q can store the address of p;
    q = &p; // q points to p;

    cout << p << endl;
    cout << *p << endl;
    cout << q << endl;
    cout << *q << endl;
    cout << *(*q) << endl;
    // good practise of using paranthesis

    return 0;
}