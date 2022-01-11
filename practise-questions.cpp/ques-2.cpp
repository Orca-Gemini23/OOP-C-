// Nishant is a very naughty boy in Launchpad Batch.
// One day he was playing with strings, and randomly shuffled them all. 
// Your task is to help Nishant Sort all the strings   
// ( lexicographically ) 
// but if a string is present completely as a prefix in another string,
// then string with longer length should come first.
// Eg bat, batman are 2 strings and the string bat is present as a prefix 
// in Batman - then sorted order should have - Batman, bat.
// Input Format: N(integer) followed by N strings.
// Sample Input: 3
// bat
// apple
// batman
// Output Format: N lines each containing one string.
// Sample Output: apple
// batman
// bat

#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<string> s;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string no;
        cin >> no;
        s.push_back(no);
    }
    sort(s, s+ n);
           
    return 0;
}