#include <bits/stdc++.h>
using namespace std;

class Complex{
    float i, r;
    public:
    Complex(); // default constructor
    Complex(float x){ // parametrised constructor
        r = x;
        i = x;
    }
    Complex(float x, float y){ // the same one.
        r = x;
        i = y;
    }
    void display(){
        cout << r << " + i " << i << endl;
    }
    Complex operator +(complex);
};

Complex complex :: operator +(Complex c){
    Complex temp;
    temp.r = r + c.r;
    temp.i = i + c.i;
}

int main(){
           
    return 0;
}