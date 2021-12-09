#include <bits/stdc++.h>
using namespace std;

// void bubbleSort(int *A, int n){
//     int i, j, temp;
//     for(i = 0; i < n; i++){
//         for(j = 0; j < n - 1; j++){
//             if(A[j] > A[j + 1]){
//                 temp = A[j];
//                 A[j] = A[j + 1];
//                 A[j + 1] = temp;
//             }
//         }
//     }
// }
// 
// int main(){
// 
//     int i, arr[] = {1, 2, 3, 4, 5};
//     bubbleSort(arr, 5);
//     for(int i = 0; i < 5; i++){
//         cout << arr[i] << " " << endl;
//     }           
//     return 0;
// }
int compare(int a, int b){
    if(a > b) return 1;
    else return -1;
}
void bubbleSort(int* A, int n, int (*compare)(int, int)){
    int i, j, temp;
     for(i = 0; i < n; i++){
         for(j = 0; j < n - 1; j++){
             if(A[j] > A[j + 1]){
                 temp = A[j];
                 A[j] = A[j + 1];
                 A[j + 1] = temp;
             }
         }
     }
}

int main(){
    int i, arr[] = {1, 2, 3, 4, 5};
    bubbleSort(arr, 5, compare);
    for(i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
    return 0;
}