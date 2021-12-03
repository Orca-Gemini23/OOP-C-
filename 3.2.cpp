//  Write a function that creates a vector of user-give size M using new operator.

#include<iostream>
#include <vector>
using namespace std;
int func(){
    int m;
    cin >> m;
    vector <int> arr(m);
    for (int x : arr){
        cout << x;
    }
    return 
}