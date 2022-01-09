
#include <bits/stdc++.h>
using namespace std;

void func(int x, int y){
    x = x * x;
    y = y * y;
}

int main(){
    int a = 5, b = 2;
    func(++b,a++);
    cout << a << " " << b << endl;
           
    return 0;
}