#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
    vector<int> first_case(5);
    for(int x : first_case){
        cout << x << endl;
    }
    return 0;
}