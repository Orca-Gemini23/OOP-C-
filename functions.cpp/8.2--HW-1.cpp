#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;
int arr[100][100];

void func(int rows, int columns){
    int r = rows, c = columns;
    int sum = 0, average = 0, arr[r][c];
    for(int i = 0; i < r; i++){
        sum = sum + arr[0][i];
    }
    for(int i = 0; i < r; i++){
        average = sum/3;
    }
    cout << "The sum of the upper diagonal elements is: " << sum << endl;
    cout << "The average of the upper diagonal elements is: " << average << endl;
}

int main(){
    int a, b;
    cout << "Enter the numbers of rows and columns: ";
    cin >> a >> b;
     for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cin >> arr[i][j];
        }
     }
    func(a, b);
    return 0;
}