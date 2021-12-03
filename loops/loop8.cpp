#include<iostream>
using namespace std;
int main(){
    int i, j, n;
    cout << "Enter the number limit: ";
    cin >> n;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= (n - i); j++){
            cout << " ";
        }
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(i = n; i >= 1; i--){
        for(j = i; j <= n; j++){
            cout << " ";
        }
        for(j = 1; j < i; j++){ // here add only < not <= .
        
            cout << "*";
        }
        cout << endl;
    }
}