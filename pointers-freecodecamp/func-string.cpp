#include <bits/stdc++.h>
using namespace std;

void print(char* name);

int main(){
    void (*p)(char*);
    p = &print;
    p("World");     
    return 0;
}

void print(char* name){
    cout << "Hello " << name << endl;
}