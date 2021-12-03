#include <iostream>  // predefined macros ...
using namespace std;
int main(){
    cout << "The line is :: " << __LINE__ << endl;
    cout << "The time is :: " << __TIME__ << endl;
    cout << "The date is :: " << __DATE__ << endl;
    cout << "The File name is :: " << __FILE__ << endl;
    return 0;
}