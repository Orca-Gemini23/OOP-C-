#include<iostream>
using namespace std;
int main(){
    int i, j;
    for(i = 1; i <= 8; i++){
        for(j = i; j <= (8); j++){
            cout << " ";
        }
        for(j = 1; j <= i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    for(i = 8; i >= 1; i--){
        for(j = i; j <= (8); j++){
            cout << " ";
        }
        for(j = 1; j <= i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}