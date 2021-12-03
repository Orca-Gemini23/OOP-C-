#include<iostream>
using namespace std;
int main(){
    int a[2][2], b[2][2], c[2][2];
    int r1, c1, r2, c2;
    cout << "Enter the dimensions of two matrices: " << endl;
    cin >> r1 >> c1 >> r2 >> c2; // these are the dimensions mentioned by the user..

    if(c1 == r2){ // m * n and p * q then n = p for the process of product.
        for(int i = 0; i <= r1; i++){
            for(int j = 0; j <= c1; j++){
            cout << "Enter the values for the matrix a: " << i << j << ": ";
            cin >> a[i][j];
        }        
    }
    for(int i = 0; i <= r2; i++){
        for(int j = 0; j <= c2; j++){
            cout << "Enter the values for the matrix b: " << i << j << ": ";
            cin >> b[i][j];
        }
    }
    
    for(int i = 0; i < r1; i++){ // if r1 * c1 and r2 * c2 then final matrix is r1 * c2 :::
        for(int j = 0; j < c2; j++){
            c[i][j] = 0; // we need to store the values in the variable;;;
            for(int k = 0; k < c1; k++){
                c[i][j] = c[i][j] + a[i][k] * b[k][j];   // here k is present coz 
            }

        }
    }
    cout << "the multiplication matrix is: " << endl;
    for(int i = 0; i <= r1; i++){
        for (int j = 0; j <= c2; j++){
            cout << c[i][j] << " ";
        }   // gd knows
        cout << endl;
    }   
    }
    else{
        cout << "multiplication is not possible" << endl;
    }
    return 0;    
}