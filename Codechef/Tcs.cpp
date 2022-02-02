#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n1, n2, n3;
    int a1, a2, a3;
    cin >> n1 >> n2 >> n3;
    cin >> a1 >> a2 >> a3;
    if((n1 + n2 + n3) > (a1 + a2 + a3)){
        cout << "DRAGON" << endl;
    }
    else if((n1 + n2 + n3) < (a1 + a2 + a3)){
        cout << "SLOTH" << endl;
    }
    else if((n1 > a1)){
        cout << "DRAGON" << endl;
    }
    else if((n1 < a1)){
        cout << "SLOTH" << endl;
    }
    else if(n2 > a2){
        cout << "DRAGON" << endl;
    }
    else if(n2 < a2){
        cout << "SLOTH" << endl;
    }
    else{
        cout << "TIE" << endl;
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