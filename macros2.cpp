#include <iostream>
using namespace std;

#define MIN(a, b) ((a < b) ? a : b)
int main(){
    int i, j;
    i = 300;
    j = 100;

    cout << "Min is :: " << MIN(i, j) << endl;
    return 0;
}