#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int base;
    int exponent;
    int result;
    cout << "Enter the base and exponent::"<<endl;
    cin >> base;
    cin >> exponent;
    result = pow(base, exponent);
    cout << result << endl;
    return 0;

}