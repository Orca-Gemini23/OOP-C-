#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        ((a + b) % 2 == 0) ? cout << "BOB" << endl : cout << "ALICE" << endl;
    }
    return 0;
}