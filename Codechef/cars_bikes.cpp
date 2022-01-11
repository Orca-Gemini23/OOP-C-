#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 2){
            cout << "YES" << endl;
        }
        else if(n % 4 == 0){
            cout << "NO" << endl;
        }
    }

    return 0;
}