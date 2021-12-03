#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number ::" << endl;
    cin >> n;
    for (int i = 0; i <= 10; i++){
        cout << " %d * "<< n << i << " = " << i * n << endl;
    }
    return 0;
}