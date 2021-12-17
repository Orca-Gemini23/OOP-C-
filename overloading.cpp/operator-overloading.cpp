#include <bits/stdc++.h>
using namespace std;

class ABC{
    int x;
    int y;
    public:
    void getData(int a, int b){
        x = a;
        y =b;
    }
    void Display(void){
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
    }

    void operator -(); // operator overloading
};

void ABC :: operator -(){ // declaring outside the class ..
    x = -x;
    y = -y;
}

int main(){
    ABC A1;
    A1.getData(4, 3);
    A1.operator-();  
    A1.Display();
            
    return 0;
}