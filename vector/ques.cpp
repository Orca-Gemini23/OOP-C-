#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> m;
    for(int i = 0; i < n; i++){
        int no;
        cin >> no;
        m.push_back(no);
    }   
    int x, a, b;
    cin >> x;
    m.erase(m.begin() + x);
  
    
    cin >> a >> b;
   
    
    m.erase(m.begin() + a);
    m.erase(m.begin() + b);
    
    cout << m.size() << endl;
    for(int x : m){
        cout << x << " ";
    }
    
    return 0;
}
