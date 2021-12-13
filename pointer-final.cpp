#include <iostream>
int main(){
    int* x;
    x = new int; // giving it a pointee
    *x = 42; // dereferencing to give it a value 
    
    int *y;
    y = new int;
    *y = 13;

    int **a = &x;
    delete x;
    delete y;

    printf("%d", a);
    return 0;
}