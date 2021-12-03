#include<iostream>
using namespace std;
int main(){ // c uses malloc() and calloc() to allocate memory dynamatically
// also free() to free the allocated memory. 
// whereas c++ uses new and delete as unary operator to do that..
    int *arr; // introduce a pointer
    int size;
    cout << "Enter the array size::";
    cin >> size;

    arr = new int[size]; //relocate it to the  new int[];;;;
    cout << "The size of the array is::" << size << endl; 

    return 0;
}