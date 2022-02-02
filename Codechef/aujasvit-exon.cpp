#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m, n;
    cin >> m >> n;
    for(int i = 1; i <= (n - 1); i++){
        for(int j = 0; j < m; j++){
            m = n - m;
            cout << m;
            break;
        }
        cout << endl;
        
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
           
    return 0;
}