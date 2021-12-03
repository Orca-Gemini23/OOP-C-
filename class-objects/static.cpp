#include<iostream>
using namespace std;

class item{
    static int count;   // ye object ka nahi puri class ka count hai;;;
    int number; // this 
    public:

    void getData(int a){
        number = a;
        count++;
    }
    void getcount(void){
        cout << "count: ";
        cout << count << endl;
    }
};

int item :: count;  // definition of static class member

int main(){
    item a, b, c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getData(100);
    cout << "After reading data: " << endl;
    a.getcount();
    b.getcount();

    return 0;
}