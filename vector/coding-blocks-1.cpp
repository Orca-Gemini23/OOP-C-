#include <bits/stdc++.h>
#include <vector> // include the header file

using namespace std;

int main(){

    vector<int> a; // dynamic array 
    // it means it is a vector of integer

    vector<int> b(5,10);
    // this means five int with value 10 - init a vector of zeroes (n, 0)

    vector<int> c(b.begin(),b.end());
    vector<int> d{1, 2, 3, 4, 5};

    for(int i = 0; i < c.size(); i++){
        cout << c[i] << endl;
    }
    cout << endl;

    // here auto means vector<int> :: iterator
    for(auto it = b.begin(); it != b.end(); it++){
        cout << (*it) << ", ";
    }
    for(int x:d){
        cout << x << ",";
    }
    cout << endl;

    // push_back extends the array if needed and adds the value to the next list.
    vector<int> v;
    int x;
    cin >> x;
    for(int i = 0; i < x; i++){
        int no;
        cin >> no;
        v.push_back(no);
    }
    // during the push back the vector had of size 1 then 2, 4 , 8 and so on ..

    for(int x: v){
        cout << x << ", ";
    }
    cout << endl;

    return 0;
}