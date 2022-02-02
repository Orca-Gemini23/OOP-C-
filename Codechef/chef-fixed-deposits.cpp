#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    int x;
    cin >> n >> x;
    int count = 0;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<>());
    // here the greater<int> is my comparator function 
    // and is passed as the third arguement.
    // it returns a value which is convertible to bool 
    // and tells us whether the passed arguement should be placed 
    // before the passed arguement or not.. 
    bool c = false;
    int i;
    for(i = 0; i < n; i++){
        sum = sum + arr[i];
        if(sum >= x){
            c = true;
            break;
        }
    } 
    if(c){ // c is true here ..
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