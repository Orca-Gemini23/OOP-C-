#include<iostream>
using namespace std;
int n = 10; // global variable
int main()
{
    int n;
    cout << n << endl;
    {
        int n = 2; // local variable::
        cout << n << endl;
    }
    cout << ::n << endl; // namespace to use global variable::
    return 0;
}