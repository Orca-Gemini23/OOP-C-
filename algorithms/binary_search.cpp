#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x){
    if(r > l){
        int mid = l + (r - l)/2; // here l and r are the indexes of the array where l is 0;;
        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid] < x){
            return binarySearch(arr, l, mid + 1, x);
        }
        return binarySearch(arr, l, mid - 1, x);
    }
    return -1;
}
int main(){
    int arr[] = {1, 23, 45, 69, 78};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Enter x: ";
    cin >> x;
    int result = binarySearch(arr, 0, n - 1, x);
    
    (result == -1) ? cout << "Element is not present" << endl : cout << "Element found" << endl;
    return 0;
}
