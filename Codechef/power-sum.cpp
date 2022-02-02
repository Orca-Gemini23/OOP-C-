#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int arr[n];
    int x, k;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }           
    return 0;
}