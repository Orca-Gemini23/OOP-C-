#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    int n, a, b;
    int count = 0;   
    cout << "Enter the number of times you want to input: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
    }
    
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            count = count + j;
        }
        cout << count << endl;
    }
    return 0;
}