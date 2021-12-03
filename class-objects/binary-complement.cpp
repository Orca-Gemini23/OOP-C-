#include <iostream>
#include <string>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

class solution{
    string s;
    public:
    void getData(void){
        cout << "Enter a binary number: ";
        cin >> s;
    }
    void check_bin(void){
        for(int i = 0; i < s.length(); i++){
            if(s.at(i) != '0' && s.at(i) != '1'){
                cout << "Error" << endl;
                break;
            }
        }
    }
    void ones(void){
        check_bin(); // calling member function
        for(int i = 0; i < s.length(); i++){
            if(s.at(i) == '0'){
                s.at(i) ='1';
            }
            else{
                s.at(i) = '0';
            }
        }
    }
    void display_ones(void){
        ones(); // calling member function
        cout << "The complement of binary string is: " << s << endl;
    }    
};
int main(){
    solution x;
    x.getData();
    x.display_ones();
    return 0;
}