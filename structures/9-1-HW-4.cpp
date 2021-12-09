#include <iostream>
using namespace std;

struct student{
    int code;
    char name[5];
    int marks;
    int dep_no;
}S1;

int main(void){
    int n, choice;
    int arr[n];
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Enter the student code" << endl;
        cin >> S1.code;
        cout << "Enter the student name: " << endl;
        cin >> S1.name;
        cout << "Enter the marks" << endl;
        cin >> S1.marks;
        cout << "Enter the choice: \n"
                "1. IT \n"
                "2. COMP \n"
                "3. EXTC \n"
                "4. Data science \n";
        cin >> choice;      
    }
    cout << "Hello world" << endl;
    return 0;
}