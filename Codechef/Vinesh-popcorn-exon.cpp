#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2;
        cin >> b1 >> b2;
        cin >> c1 >> c2;
        if((a1 + a2) > (b1 + b2) && (a1 + a2) > (c1 + c2)){
            cout << (a1 + a2) << endl;
        }
        else if((b1 + b2) > (a1 + a2) && (b1 + b2) > (c1 + c2)){
            cout << (b1 + b2) << endl;
        }
        else{
            cout << (c1 + c2) << endl;
        }
    }           
    return 0;
}