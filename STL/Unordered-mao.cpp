#include <bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<int, int> m;
    int arr[5] = {1, 3, 1, 5, 2};
    for(int i = 0; i < 5; i++){
        m[arr[i]]++;
    }   

    for(auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    return 0;
}