#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void add(){
    int r1, r2, i1, i2;
    cout << "Enter the numbers : ";
    cin >> r1 >> i1 >> r2 >> i2;
    int sum_real = r1 + i1;
    int sum_imag = i1 + i2;
    cout << "The sum is: " << sum_real << " + i" << sum_imag << endl;
}

void subtract(){
    int r1, r2, i1, i2;
    cout << "Enter the numbers: ";
    cin >> r1 >> r2 >> i1 >> i2;
    int sub_real = r1 - r2;
    int sub_imag = i1 - i2;
    cout << "The difference is: " << sub_real << " + i" << sub_imag << endl;
}

void product(){
    int r1, r2, i1, i2;
    cout << "Enter the numbers: ";
    cin >> r1 >> r2 >> i1 >> i2;
    int pro_real = r1 * r2;
    int pro_imag = i1 * i2;
    cout << "The product is: " << pro_real << " + i" << pro_imag << endl;
}

int main(){
    int choice;
    cout << "Enter the choice: \n"
            "1. Addition of two complex numbers \n"
            "2. Subtraction of two complex numbers: \n"
            "3. Multiplication of two complex numbers: \n";
    cin >> choice;

    switch(choice){
        case 1:
        add();
        break;
        case 2:
        subtract();
        break;
        case 3:
        product();
        break;
        default:
        cout << "Error in the process" << endl;
        break;
    }
    return 0;
}