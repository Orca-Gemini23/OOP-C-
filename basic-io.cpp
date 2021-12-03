#include<iostream>
using namespace std;
int main(){
    cout << "Hello World" << endl;
    // standard output stream . it's the instance of the ostream class
    cerr << "An error occured" << endl;
    // un-buffered standard ouput stream, it means the error message is not stored
    // in the buffer and is displayed immediately
    clog << "An error part-2 occured" << endl;
    // buffered standard error stream, it means the error message is stored in the buffer
    // or when the buffer is not explicitly flushed (using flush())

    // Difference between cout and cerr is: the output gets redirected to the file.
    // and is also unbuffered.
    return 0;
}