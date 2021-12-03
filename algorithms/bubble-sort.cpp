#include <bits/stdc++.h>

using namespace std;

void swap(int *x, int *y){   //both are pointer
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n){
    int i;
    for(i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){ // here j is less than the third element in the array
            if ( arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);   
            }
        }
    }
}

void print_Arr(int arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        cout << arr[i] << " ";

    }
    cout << endl;
}
int main(){
    int arr[] = {45, 69, 23, 1, 15, 589, 30, 5, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array is: ";
    print_Arr(arr, n);
    return 0;
}