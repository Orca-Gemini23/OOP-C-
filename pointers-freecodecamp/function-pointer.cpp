#include <bits/stdc++.h>
using namespace std;

int add(int a, int b){
    return a + b;
}
int main(){
    int c;
    int (*p)(int, int);
    // without asteriks 
    // it would be a function
    p = &add;
    // function name will return us pointer
    c = (*p)(2, 3);
    // de-referencing and executing the function.
    cout << c << endl;

    return 0;
}