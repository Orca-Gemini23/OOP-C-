#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double total;
    cin >> n >> total;      
    if(n % 5 != 0){
        cout << n << endl;
    }
    else if(n > total){
        cout << n << endl;
    }
    else{
        total = total - n;
        total = total - 0.5;
        cout << setprecision(2) << fixed << total << endl;
    }

    return 0;
}