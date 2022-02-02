// normal map = sorted 
// unordered map = unsorted 

// map has a pair of a key and a value and is not 
// continuous like vector in a memory 

#include <bits/stdc++.h>
using namespace std;

void solve(map<int, string> &m){
    cout << m.size() << endl;
    for(auto &pr : m){
        cout << pr.first << " " << pr.second << endl;
    }
}

int main(){
    // log n time for inserting element .. 
    map<int, string> m;
    m[1] = "abc"; // O(log(n))
    m[2] = "cdc";
    m[3] = "efc";

    // or like this ..
    m.insert({4, "afg"}); 
    solve(m);

    // maps keys are unique and cant be changed 
    m[3] = "ggg";
    solve(m);

    auto it = m.find(3); // returns an iterator 
    if(it == m.end()){
        cout << "no value" << endl;
    }
    else{
        cout << (*it).first << " " << (*it).second << endl;
    }
             
    return 0;
}