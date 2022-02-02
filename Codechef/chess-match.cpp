#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    int time;
    int result = (2 * (180 + n));
    time = a + b;
    result = result - time;
    cout << result << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }           
    return 0;
}
// Hello world 