//Sanju needs your help! He gets a list of employees with their salary.
//The maximum salary  is 100.
// 
// Sanju is supposed to arrange the list in such a manner that the list is sorted in decreasing order
// of salary. And if two employees have the same salary, 
// they should be arranged in lexicographical manner such that the list contains only names of
// those employees having salary greater than or equal to a given number  x.
// 
// Help Sanju prepare the same!
// 
// Input Format: On the first line of the standard input, there is an integer x.
// The next line contans integer N, denoting the number of employees. N lines follow, 
// which contain a string and an integer, denoting the name of the employee and his salary. 
// Sample Input: 79
// 4
// Eve 78
// Bob 99
// Suzy 86
// Alice 86
// 
// Output Format: You must print the required list. 
// Sample Output: Bob 99
// Alice 86
// Suzy 86

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool myCompare(pair<string, int> a, pair<string, int> b){
    if(a.second == b.second){ 
        return a.first < b.first; // if the marks are equal then names 
        // jiska first chota woh pehle aayega
    }
    return a.second > b.second; // or else the smaller ones 
}

int main(){
    int x, n, i;
    cin >> x;
    pair<string, int> a[1000];
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> a[i].first;
        cin >> a[i].second;
    }
    sort(a, a + n, myCompare);
    for(int i = 0; i < n and a[i].second >= x; i++){
        cout << a[i].first << " " << a[i].second << endl;
    }
    return 0;
}