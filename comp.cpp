#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a, b, c, d, n;
    cout << "Enter the number of sides: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c >> d;
    }
    if (a == b || c == d){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    cout << endl;
    if (a == c || b == d){
        cout << "YES";
    }
    cout << endl;
    if (a != b || c != d){
        cout << "NO";
    }
    return 0;
}