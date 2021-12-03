#include <iostream>
using namespace std;

#define MKSTR(x) #x
int main(){
    cout << MKSTR("Hello world") << endl;
    return 0;
}