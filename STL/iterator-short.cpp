#include <bits/stdc++.h>
using namespace std;

int main(){
    // range basaed loop 
    vector<int> v = {1, 2, 3, 4, 5};
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }           
    cout << endl;
    for(int value : v){
        cout << value << " ";
    }

    for(int &value : v){
        value++;
    }
    cout << endl;
    for(int value : v){
        cout << value << " ";
    }

    vector<pair<int, int> > vp = {{1, 2}, {2, 3}};
    for(pair<int, int> x : vp){
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    return 0;
}