#include<iostream>
using namespace std;

void func(int & x){
    x = x + 10;
}
int main(){
    int m = 10;
    func(m);+-
    return 0;
}