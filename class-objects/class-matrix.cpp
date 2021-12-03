#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

class matrix{
    int arr[3][3];
    public:
    void getData(void){
        cout << "Enter the element in the 3*3 matrix: " << endl;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cout << i << j << " ";
                cin >> arr[i][j];
            }
        }
    }
    void display(void){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cout << arr[i][j] << " ";
            }
        }
    }
    friend matrix trans(matrix); // has the object as the arguements
};

matrix trans(matrix m){
    matrix m2;
    for(int i =0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            m2.arr[i][j] = m1.arr[j][i];
            return m2;  // returning the object
        }
    }
}

int main(){
    matrix mat1, mat2;
    mat1.getData();
    cout << "You entered the following matrix: " << endl;
    mat1.display();

    mat2 = trans(mat1);
    cout << "Transposed matrix: " << endl;
    mat2.display();
    return 0;
}