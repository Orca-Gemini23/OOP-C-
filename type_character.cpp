#include <iostream>
using namespace std;
int main(){
    char a;
    cout << "Enter the character ::" << endl;
    cin >> a;
    if ( a >= 48 && a <= 57){
        cout << "The character is a digit" << endl;
    }
    else if(a >= 65 && a <= 90){
        cout << "The character is a uppercase letter" << endl;
    }
    else if (a >= 97 and a <= 122){
        cout << "The character is lowercase" << endl;
    }
    else{
        cout << "Special character" << endl;
    }
    return 0;
}