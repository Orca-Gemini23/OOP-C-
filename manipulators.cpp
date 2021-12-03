#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int a = 25;
    int b = 905555;
    cout << setw(10) << a << endl; // setw creates list of (size) and stores values there.
    cout << setw(10) << b << endl;
    return 0;
}