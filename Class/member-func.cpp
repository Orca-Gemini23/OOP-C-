#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
    int age;
    int roll_no;
    public:
    void getData();
    void putData(void);
};

void Student :: getData(){
    cout << "Enter the age: ";
    cin >> age;
    cout << "Enter the roll no: ";
    cin >> roll_no;
}

void Student :: putData(){
    cout << age << endl;
    cout << roll_no << endl;
}

int main(){
    Student s1;
    s1.getData();
    s1.putData();           
    return 0;
}