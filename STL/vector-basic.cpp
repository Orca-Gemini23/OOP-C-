#include <bits/stdc++.h>
using namespace std;

void solve(vector<pair<int, int>> &v){
    for(int i = 0 ; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}

int main(){
    vector<pair<int, int>> v; 
    for(int i = 0; i < v.size(); i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    return 0;
}
