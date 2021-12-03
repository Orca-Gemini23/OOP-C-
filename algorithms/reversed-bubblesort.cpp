#include <bits/stdc++.h>
using namespace std;
// reverse bubblesort array::::
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n){
    int i, j;  
    for(i  = 0; i < n - 1; i++){
        for(j = 0; j < n - i -  1; j++){
            if(arr[j] < arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void print_arr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[] = {125, 23, 69, 58, 1254};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array is: ";
    print_arr(arr, n);
    return 0;    
}