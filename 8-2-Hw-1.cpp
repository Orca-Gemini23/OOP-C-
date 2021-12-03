#include <iostream>

using namespace std;
int arr[100][100];

void func(int rows, int columns){
    int r = rows, c = columns;
    int sum = 0, average = 0, arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << "Enter the elements of the matrix: " << i << j << " " << endl;
            cin >> arr[i][j];
        }
    }
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
    func(a, b);
    return 0;
}