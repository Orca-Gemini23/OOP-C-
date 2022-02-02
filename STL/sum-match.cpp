#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, x;
    cin >> n >> x;
    int sum = 0;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), greater<int>());
    bool c = false;
    int i;
    for(i = 0; i < n; i++){
        sum = sum + v[i];
        if(sum >= x){
            c = true;
            break;
        }
    }
    if(c){
        cout << i + 1 << endl;
    }
    else{
        cout << "-1" << endl;
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