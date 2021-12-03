#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int remainder, dig_sum = 0;
    int result;
    int dig_pro = 1;
    while( n != 0){
        remainder = n % 10;
        dig_pro = dig_pro * remainder;
        n = n / 10;
    }
    cout << dig_pro;
    while(n != 0){
        remainder = n % 10;
        dig_sum = dig_sum + remainder;
        n = n / 10;
    }
    cout << n;
    
    result = dig_pro - dig_sum;
    cout << result << endl;
    return 0;
}