#include<iostream>
using namespace std;
int main(){
    int total = 1; // dynamic initialization of variables.
    int & sum = total;  // refernce variables.. where sum is an alias for the total.

    cout << total << endl;
    cout << sum << endl;

    return 0;
}