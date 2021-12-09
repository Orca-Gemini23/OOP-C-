#include <iostream>
using namespace std;

void armstrong(int n){
    int rem, sum = 0;
    cout << "Enter the number: ";
    cin >> n;

    int temp = n;
    while(n > 0){
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if(temp == sum){
        cout << "It's an armstrong number" << endl;
    }
    else{
        cout << "Not an armstrong number" << endl;
    }
}
int main(){
    int c;
    armstrong(c);
    return 0;
}