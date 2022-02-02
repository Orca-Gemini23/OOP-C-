#include <bits/stdc++.h>
using namespace std;

// iterator : points to an element that the vector is 
// storing.. 
// iterator is continuous .. 

// it++ = next iterator
// it + 1 = next location 

// MAIN == (*it).first = it->first

int main(){
    vector<int> v{1, 2, 3, 4, 5};
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }               
    cout << endl;
    vector<int> :: iterator it = v.begin();
    for(it = v.begin(); it != v.end(); ++it){
        cout << (*it) << endl;
    }
    cout << endl;

    vector<pair<int, int> > vp = {{1, 2}, {3, 4}, {5, 6}};
    vector<pair<int, int> > :: iterator itt;
    for(itt = vp.begin(); itt != vp.end(); itt++){
        cout << (*itt).first << " " << (*itt).second << " ";
    }
    cout << endl;
    return 0;
}
// use auto for short form and then avoid the iterator it line .