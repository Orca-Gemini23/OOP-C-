#include<iostream>
using namespace std;
int main(){
    int a[3][3], b[3][3], c[3][3], i, j;
    cout <<"Enter the values for the matrix: ";
    for(i = 0; i <= 3; i++){
        for(j = 0; j <= 3; j++){
            cout << "Enter the values for the matrix A " << i << j;
            cin >> a[i][j];
        }
    }
    for(i = 0; i <= 3; i++){
        for(j = 0; j <= 3; j++){
            cout << "Enter the values for the matrix B " << i << " " << j;
            cin >> b[i][j];
        }
    }
    for(i = 0; i <= 3; i++){
        for(j = 0; j <= 3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "The resultant matrix is: ";
    for(i = 0; i <= 3; i++){
        for(j = 0; j <= 3; j++){
            cout << c[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
    
}