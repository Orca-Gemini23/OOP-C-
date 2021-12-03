#include<iostream>
using namespace std;
int main(){
    int i, j;
    
    for(i = 6; i >= 1; i--){
        for(j = i; j <= 6; j++){
            cout << " ";
        }
        for(j = 1; j <= (2*i - 1); j++){ // here j is 1
        // because for the looping pattern i is just for the spaces 
            cout << "*";
        }
        cout << endl;
    }
}