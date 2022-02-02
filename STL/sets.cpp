#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string value : s){
        cout << s << endl;
    }
}
int main(){
    set<string> s;
    s.insert("abc");
    s.insert("def"); // log(n)
    s.insert("feg");
    
    auto it = s.find("abc"); // points to the
    // memory where abc is stored . 
    if(it != s.end()){
        cout << *it;
    }
    
    print(s);
    return 0;
}