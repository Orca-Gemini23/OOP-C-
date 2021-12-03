#include<iostream>
using namespace std;
int main(){
    int i, j, n;
    cout << "Enter the num: ";
    cin >> n;

    for(i = 1; i <= n; i++){
        for(j = i; j <= n; j++){
            cout << " ";
        }
        for(j = 1; j <= i; j++){
            cout << j;
        }
        for(j = i - 1; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }
}