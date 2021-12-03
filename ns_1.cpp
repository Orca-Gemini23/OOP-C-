#include <iostream>
using namespace std;

namespace block1{
    void display(){
        int a = 5;
        cout << a << endl;
    }
}
namespace block2{
    void get(){
        int a = 10;
        cout << a << endl;
    }
}
int main(){
    int a = 58;
    cout << a << endl;
    block1::display();
    block2::get();
    return 0;
}