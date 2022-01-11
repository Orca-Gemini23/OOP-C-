#include <bits/stdc++.h>
using namespace std;

void solve(){
    double pop, days;
    cin >> pop >> days;
    double dead = 0;
    if(days > pop){
        cout << pop << endl;
    }
    else if(days >= 11){
        days = days - 10;
        dead = 1024;
        for(int i = 1; i <= days; i++){
            dead = dead*(pow(3,i));
        }
        cout << dead << endl;
    }
    else if(days == 0){
        cout << 0 << endl;
    }
   
    else{
        dead = 1;
        for(int i = 0; i < days; i++){
            dead = dead + pow(2, i);
        }
        cout << dead << endl;
    }
}

int main(){
    double test_cases;
    cin >> test_cases;
    while(test_cases--){
        solve();
    }
    return 0;
}