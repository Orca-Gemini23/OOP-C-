#include <iostream>
using namespace std;

double cube(double a){
    double result = a * a * a;
    return result;
}

int main(){
    int c = 25;
    cout << cube(c) << endl;
    
    return 0;
}