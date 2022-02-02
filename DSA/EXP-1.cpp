#include <iostream>
#include <math.h>

using namespace std;

void insert(int arr[], int size){
    for(int i =0; i < size; i++){
        cin >> arr[i];
    }
}
void tranverse(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void max(int arr[], int size){
    int max = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > arr[0]){
            max = arr[i];
        }
    }
    cout << max << endl;
}

void min(int arr[], int size){
    int min = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[0] > arr[i]){
            min = arr[i];
        }
    }
    cout << min << endl;
}

void deletion(int arr[], int size, int position){
    cout << "Enter the position: ";
    cin >> position;
    --position;
    for(int i = position; i <= (size - 1); i++){
        arr[i] = arr[i + 1];
    }
    cout << "The new array is: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];
    insert(arr, n);
    cout << "Elements added successfully" << endl;
    tranverse(arr, n);
   
    cout << "The maximum element is: " << endl;
    max(arr, n);
    cout << "The minimum element is: " << endl;
    min(arr, n); 
    int pos;
    deletion(arr, n, pos);

    return 0;
}