#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int *p; //  access a member using object name and pointer to that name::
    // -> access a member using a pointer to that object

    p  = &x;
    cout << x << endl;
    cout << p << endl;
    cout << &x << endl;
    cout << *p << endl;

    return 0;
}