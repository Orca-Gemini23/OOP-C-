#include<iostream>
using namespace std;
int main(){
    int a[10][10];
    int f = 1, i, j;  // assume it to be unit matrix;
    int r, c; // rows and columns

    cout << "Enter the dimensions: "; 
    cin >> r >> c;

    if(r != c){
        cout << "The matrix is not a square matrix " << endl;
    }
    else{
        cout << "Enter the values for the matrix: ";
        for(i = 0; i < r; i++){
            for(j = 0; j < c; j++){
                cin >> a[i][j];
            }
        }
        for(i = 0; i< r; i++){
            for(j = 0; j < c; j++){
                if(i == j){
                    if(a[i][j] != 1){ // coz agar a[i][j] then it will be 1 everywhere :: 
                        f = 0; // setting a parameter 
                        break;
                    }
                }
                else{
                    if(a[i][j] != 0){
                        f = 0;
                        break;
                    }
                }
            }
        }
    }
    if( f == 1){
        cout << "It's a unit matrix:: " << endl;
    }
    else{
        cout << "Not a matrix" << endl;
    }
    return 0;
}