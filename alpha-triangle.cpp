#include <iostream>
using namespace std;

int main()
{
    int i, j;
    char alph = 'A';
    int n, blk;
    int ctr = 1;
    cout << " Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            cout << "  ";
        for (j = 0; j <= (ctr / 2); j++) 
        {
            cout << alph++ << " ";
        }
        alph = alph - 2;
        for (j = 0; j < (ctr / 2); j++) 
        {
            cout << alph-- << " ";
        }
        ctr = ctr + 2;
        alph = 'A';
        cout << endl;
    }
}