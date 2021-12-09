#include<iostream>
using namespace std;
int main(){
    int i, j, num;
    int spc;
    char ch = 'A';
    int ctr = 1;
    cout << "Enter the num limit: ";
    cin >> num;

    for(i = 1; i <= num; i++){
        for(spc = 1; spc <= num - i; spc++)
            cout << " ";
        for(j = 0; j <= (ctr/2); j++){
            cout << ch ++  << " ";
        }
        ch = ch - 2;
        for(j = 0; j <= (ctr/2); j++){
            cout << ch -- << " ";
        }
        ctr = ctr + 2;
        ch = 'A';
        cout << endl;
    }
    return 0;
}