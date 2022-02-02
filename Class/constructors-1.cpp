#include <iostream>
#include <math.h>
using namespace std;

class Student{
    private:
    int m, n;
    public:
    Student(int, int); // constructor 
    // declared 
    void display(){
        cout << m << endl;
        cout << n << endl;
    }
};

Student :: Student (int x, int y){
    // constructor defined.. 
    m = x;
    n = y;
}
int main(){
    Student stdd(0, 120);
    stdd.display();
    
    return 0;
}