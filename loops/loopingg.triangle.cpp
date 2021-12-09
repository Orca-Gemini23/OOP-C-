#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number of lines: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        for(int j = i; j <= num; j++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        for(int j = i - 1; j >= 1 ; j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}