#include<iostream>
using namespace std;
int main(){
    int n;
    char ch = 'A';
    int ctr = 1;
    cout << "Enter the number limit: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            cout << " ";
        }
        for(int j = 0; j <= ( ctr / 2 ); j++){
            cout << ch++;
        }
        ch = ch - 2;
        for(int j = 0; j < (ctr / 2); j++){
            cout << ch--;
        }
        ctr = ctr + 2;
        ch = 'A';
        cout << endl;
    }
    return 0;
}