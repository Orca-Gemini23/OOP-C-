#include <iostream>
using namespace std;

void func(void){
    int n;
    int arr[100];
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Enter the elements: " << endl;
        cin >> arr[i];
    }
    int min_ele = arr[0];
    for(int i = 0; i < n; i++){
        if(min_ele > arr[i]){
            min_ele = arr[i];
        }
    }
    cout << "Minimum element is: " << min_ele << endl;
}
int main(){
    func();
    return 0;
}