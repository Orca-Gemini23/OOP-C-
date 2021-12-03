#include <iostream>
using namespace std;

double cube(double a){
    double result;
    result = a * a * a;
    return result;
}
int main(){
    int c;
    c = cube(5);
    cout << c << endl;
    return 0;
}