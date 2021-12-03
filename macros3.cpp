#include <iostream>
using namespace std;

#define DEBUG
#define MIN(a, b) ((a < b) ? a:b)

int main(){
    int i, j;
    i = 600; 
    j = 400;
    
    #ifdef DEBUG
    cerr << "Trace :: Inside main function" << endl;
    #endif

    #if 0 // ignored part coz debug is present 
    cout << "Hello world" << endl;  
    #endif
    cout << MIN(i, j) << endl; // cout is used for stdout stream :: // also used for output calls

    #ifdef DEBUG
    cerr << "Trace :: Coming out of main function" << endl; // cerr function used for stderr stream :: used for information and error messages
    #endif

    return 0;
}