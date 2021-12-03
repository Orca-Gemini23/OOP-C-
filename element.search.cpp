#include <iostream>
using namespace std;
int main(){
    int arr[100], num;
    int number_element;
    cout <<"Enter the elements of the array: ";
    cin >> num;

    for(int i = 0; i < num; i++){
        cout << "Enter the elements:: ";
        cin >> arr[i];
    }

    cout << "Enter the element you want to find the element in the array: ";
    cin >> number_element;

    for(int i = 0; i < num; i++){
        if(arr[i] == number_element){
            cout << "Element found at array index: " << i << endl;
            break;
        }
    }
    return 0;
}