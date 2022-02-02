#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    int x, y, z;
    cin >> x >> y >> z;
    if(x > 50 && x > y && x > z){
        cout << "A" << endl;
    }
    else if(y > 50 && y > z && y > x){
        cout << "B" << endl;

    }
    else if(z > 50 && z > x && z > y){
        cout << "C" << endl;
    }
    else{
        cout << "NOTA" << endl;
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