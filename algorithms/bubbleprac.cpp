#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void print_arr(int arr[], int size){
    for(int i = 0; i < n; i ++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[];
    int n = sizeof(arr[]) / sizeof(arr[]);
    bubbleSort(arr[], n);
    cout << "Sorted array is: ";
    print_arr(arr, n);
    return 0;
}