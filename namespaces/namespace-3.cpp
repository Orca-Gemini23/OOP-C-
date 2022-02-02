#include <iostream>
using namespace std;

namespace foo{
    int value(){
        return 5;
    }
}

namespace bar{
    const double pi = 3.14;
    double value(){
        return 2*pi;
    }
}

int main(){
    cout << foo::value() << endl;
    cout << bar::value() << endl;
    cout << bar::pi << endl;
    return 0;
}