#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

class sample{
    int a;
    int b;
    public:
    void setvalue(){
        a = 25;
        b = 45;
    }
    friend float mean(sample s); // cannot be called using the object of that class
    // this function allows the function to have access to the private date of these classes.
};
float mean(sample s){
    return float (s.a + s.b) / 2.0;
}

int main(){
    sample X;
    X.setvalue();
    return 0;
}