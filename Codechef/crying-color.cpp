#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        long long int ans = 0;
        vector<vector<long long int>> v(3, vector<long long int>(3));
        for(int i = 0; i < 3; i++){
            cin >> v[i][0] >> v[i][1] >> v[i][2];
        }
        if(v[0][0] == n && v[1][1] == n && v[2][2] == n){
            cout << ans << endl;
            continue;
        }
        int lsum = v[2][0] + v[2][1] + v[1][0];
        int rsum = v[0][1] + v[1][1] + v[1][2];
        cout << max(lsum, rsum) << endl;
    }
           
    return 0;
}