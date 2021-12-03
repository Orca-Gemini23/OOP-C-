// floyed triangle
#include<iostream>
using namespace std;
int main(){
    int i, j, n, ctr = 1;
    char ch = 'A';
    cout << "Enter the number limit: ";
    cin >> n;

    for(i = 1; i <= n; i++){
        for(j = i; j <= n; j++){
            cout << " ";
        }
        for(j = 0; j <= (ctr / 2); j++){
            cout << ch++ << " ";
        }
        for(j = 0; j <= (ctr / 2); j++){
            cout << ch-- << " ";
        }
        cout << endl;
    }
}