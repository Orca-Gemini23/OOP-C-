#include<iostream>
using namespace std;
int main(){
    int i, j, arr[3][2];
    cout << "Enter the elements: " << endl;
    for( i = 0; i <= 2; i++)
        for(j = 0; j <= 1; j++)
            cin >> arr[i][j];
        
    for(i = 0; i <= 2; i++)
        for(j = 0; j <= 1; j++)
            cout << arr[i][j] << "  ";vec
            cout << endl;
        
    
    
    return 0;
}