#include <bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin >> n;
    while(n--){
        int a,b,x;
        cin >> a >> b >> x;
        int total = b - a;
        int years = (total) / x;
        cout << years << endl;
    }
           
    return 0;
}