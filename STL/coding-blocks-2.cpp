#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>  d{1, 2, 3, 4, 5};
    d.push_back(6);

    // to insert elements at the end
    for(int x: d){
        cout << x << ", ";
    }
    cout << endl;

    // delete element at the end;
    d.pop_back();
    for(int x: d){
        cout << x << " ";
    }
    cout << endl;

    // insert elements at the middle 
    d.insert(d.begin() + 3, 100);
    for(int x : d){
        cout << x << " ";
    }
    cout << endl;

    // to erase the elements at any position 
    d.erase(d.begin() + 2);
      for(int x: d){
        cout << x << " ";
    }
    cout << endl;    
    cout << d.size() << endl;
    cout << d.capacity() << endl; // total size 

    // to avoid the shrink position
    d.resize(18); // size is still 18 
    cout << d.capacity() << endl; 
    d.clear(); // to clear the vector

    if(d.empty()){
        cout << "This is an empty vector" << endl;
    }

    for(int x: d){
        cout << x << " ";
    }
    cout << endl;
    d.push_back(10);
    d.push_back(10);
    d.push_back(10);

    cout << d.front() << endl;
    cout << d.back() << endl;

    // RESERVE ::::
    // has a capacity and then adds value when we want to .

    int n;
    cin >> n;
    vector<int> v;


    // To avoid doubling we use reserve function 
    // And also time taking function . 
    v.reserve(1000);

    for(int i = 0; i < n; i++){
        int no;
        cin >> no;
        v.push_back(no);
        cout << "Changing capacity : " << v.capacity() << endl;

    }
    cout << v.capacity() << endl;

    for(int x: v){
        cout << x << " ";
    }


    return 0;
}