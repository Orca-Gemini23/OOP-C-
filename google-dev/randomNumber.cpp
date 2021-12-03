#include <iostream>
#include <time.h>
using namespace std;
int main(){
    int n;
    int num;
    cout << "The given sequence is random ::" << endl;
    
    for (int n = 0;n < 10; n++){
        
        num = rand()%100; // for random number between 1 and 100
        cout << " " << num << " ";
    }
    cout << endl;
    return 0;
}