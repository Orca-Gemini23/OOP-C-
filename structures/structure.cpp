#include <iostream>
using namespace std;

struct student{
    int Roll_no;
    char name[20];
    float marks;
}S1;

int main(){
    cout << "Enter the name: " << endl;
    cin >> S1.name;
    cout << "Enter the marks" <<endl;
    cin >> S1.marks;
    cout << "Enter the roll no " << endl;
    cin >> S1.Roll_no;

    return 0;
}