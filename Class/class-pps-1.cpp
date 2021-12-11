#include <iostream>
using namespace std;

class myData{
    public:
    char name[30];
    int age;
    float marks[3];
    int total = 0;

    void getData(){
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the age : ";
        cin >> age;
        for(int i = 0; i < 3; i++){
            cout << "Enter the marks for subject: " << i << " " << endl;
            cin >> marks[i];
        }
    }
    void printData(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        for(int i = 0; i < 3; i++){
            cout << "Marks of sub " << i << marks[i] << endl;
        }
        for(int i = 0; i < 3; i++){
            total = total + marks[i];
        }
        cout << total << endl;
    }
    
};

int main(){
    myData m1;
    m1.getData();
    m1.printData();
    return 0;
}