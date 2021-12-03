#include <iostream>
using namespace std;
int main(){
    int number, temp, rev = 0;
    cout << "Enter the number" << endl;
    cin >> number;

    while (number > 0){
        temp = number % 10;
        rev = rev * 10 + temp;
        number = number / 10;

    }
    cout << rev;
    return 0;

}