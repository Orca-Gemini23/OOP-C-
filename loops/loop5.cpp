#include<iostream>
using namespace std;
int main(){
    int i, j;
    for(i = 1; i <= 6; i++){
        for(j = i; j <= 6; j++){  // j = 1 for square and j = i for parallelogram 
            cout << " ";
        }
        for(j = 1; j <= i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}
/*    * 
     * * 
    * * * 
   * * * * 
  * * * * * 
 * * * * * * 