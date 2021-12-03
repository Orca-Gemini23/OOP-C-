#include<iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
    string arr[] = {"first", "second", "third", "fourth", "fifth"};
    vector <string> solution(arr, arr + sizeof(arr)/sizeof(string) );
    for(string str : solution){
        cout << str << endl;
    }
    return 0;
}