#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

class Demo{
    int value;
    public:
    Demo(int v = 0){
        value = v;
    }
    void showMessage(void){
        cout << "Hello world" << endl;
    }
    void display(void) const{ // appended after a function.
        cout << "Hello this will be displayed" << endl;
    }
    // When a function is declared as const, it can be called on any
    // type of object
};
int main(){
    const Demo d1; // const has to be initialized.
     // d1.showMessage(); 
     // Not displayed because const in not used after function.
    d1.display() ;
    return 0;
}