#include <bits/stdc++.h>
using namespace std;

void A(){
    cout << "Hello world" << endl;
}

void B(void (*p)()){ // function pointer as arguement
    p();
}

int main(){
    B(A);       
    return 0;
}