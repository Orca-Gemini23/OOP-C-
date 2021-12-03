#include<iostream>
using namespace std;
int main(){   
    int arr[10];
    int i;
    cout << "Enter 10 integers: ";
    for (i = 0; i < 10; i++){
        cin >> arr[i];
        for(i = 0; i < 5; i++){
            int temp = arr[i];
            arr[i] = arr[9 - i];
            arr[9 - i] = temp;
        }
    }
    cout << "The elements entered by the user are: ";
    for ( i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    return 0;
}