#include <iostream>
#include <math.h>

using namespace std;

int fact(int n){
    if(n == 1){
        return n;
    }
    return n * fact(n - 1);
}
void func(void){
    int count = 0;

    for(int i = 1; i <= 5; i++){
        count = count + fact(i)/i;
    }
    cout << count << endl;

}
int main(){
    func();
    return 0;
}