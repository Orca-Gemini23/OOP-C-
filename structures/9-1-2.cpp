#include <iostream>
using namespace std;

struct student{
    int code;
    char name[30];
    int marks;
    int dep_no;
};

int main(){
    student s1;
    cout << "Enter the code of the student: ";
    cin >> s1.code;
    cout << "Enter the name of the student: ";
    cin >> s1.name;
    cout << "Enter the marks: ";
    cin >> s1.marks;
    cout << "Enter the department number: \n"
            "1. IT \n "
            "2. COMP \n"
            "3. EXTC \n"
            "4. Data Science \n";
    cin >> s1.dep_no;

    cout <<  "Code of the student: " << s1.code << endl;
    cout << "Name of the student: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;
    cout << "Department number: " << s1.dep_no << endl;
    return 0;
}