#include <iostream>
using namespace std;

#define concat(a, b) a ## b // concanation of the two strings ...
int main(){
    int xy = 100;
    cout << concat(x, y);
    return 0;
}