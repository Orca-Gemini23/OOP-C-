#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int a = 1025;
    int *p;
    p = &a;
    printf("size of the integer is %d \n", sizeof(int));
    printf("Address is %d and value is %d \n", p, *p);
    
    void *p1;
    p1 = p;
    cout << p1 << endl;
    cout << &p1 << endl;
    cout << *p1 << endl; // void dont work this way..
    return 0;
}