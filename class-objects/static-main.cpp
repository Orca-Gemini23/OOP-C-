#include<iostream>
using namespace std;


class Employee{
    int id;
    static int count; // used to maintain values common to the entire class
    public:
    void getData(void){
        cout << "Enter the id" << endl;
        cin >> id;
        count ++;
    }
    void putData(void){
        cout << "The employee id is: " << id << " Employee number is: "<<  count << endl;
    }
};

int Employee :: count;
int main(){
    Employee a, b, c;
    a.getData();
    a.putData();

    b.getData();
    b.putData();
    
    c.getData();
    c.putData();
    return 0;
}