#include <bits/stdc++.h>
using namespace std;

int main(){
    int* p = NULL;

    p = new(nothrow) int;
    // no throw : dont throw an exception in case of failure 
    // and is used in assigning values in the heap/free storage

    if(!p){
        cout << "Memory allocation failed" << endl;
    }
    else{
        // Stores memory at allocated address 
        *p = 20;
        cout << "Value of p is: " << *p << endl;
    }

    // requesting block of memory using new operator 
    float* r = new float(75.25);
    cout << "The value of r is: " << *r << endl;
    
    // Request block of memory 5;
    int n = 5; 
    int *q = new(nothrow) int[5];

    if(!q){
        cout << "Memory allocation failed " << endl;
    }
    else{
        for(int i = 0; i < n; i++){
            q[i] = i + 1;
        }
        cout << "Value stored in heap is: " << endl;
        for(int i = 0; i < n; i++){
            cout << *(q + i) << " "; 
            // also you can use *(q + i)
            // coz the pointer will be pointing 
            // to every value in the array..
        } 
    }

    delete p;
    delete r;

    delete[] q;
    return 0;

}