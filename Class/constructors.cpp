#include <bits/stdc++.h>
using namespace std;

class X{
    int m, n;
    public:
    X(void);
    X(int x, int y);
};
X :: X(void){ // constructor.
// constructor accepting no arguements is 
// called a default constructor.

// also here the X (object name) will work.
    m = 0, n = 0;
}

X::X(int x. int y){ // Parametrised constructor
// now X int1 cant work.
    x = m, y = n;
}

int main(){
    X int1 = X(0, 100); // explicit call
    X int1(0, 100); // looks good
    return  0;
}