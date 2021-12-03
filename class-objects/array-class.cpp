#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

class employee{
    char name[30];
    float age;
    public:
    void getdata(void);
    void putdata(void);
};

void employee :: getdata(void){ // user membership label
    cout << "Enter name" << endl;
    cin >> name;
    cout << "Enter age" << endl;
    cin >> age;
}
void employee :: putdata(void){
    cout << "Name: " << name << endl;
    cout << "Age : " << age << endl;
}

int main(){
    const int size = 3; // keeps the value constant throughout the program
    employee manager[size];
    for(int i = 0; i < size; i++){
        cout << "Details of the manager " << i + 1 << endl;
        manager[i].getdata();  // calling functions
    }
    for(int j = 0; j < size; j++){
        cout << "Manager " << j + 1 << endl;
        manager[j].putdata();
    }
    return 0;
}