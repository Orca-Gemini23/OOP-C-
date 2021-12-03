#include<iostream>
using namespace std;

class solution{
    int number;
    float cost;
    public:
    void getData(int a, float b);
    void putData(void){
        cout << "Number: " << number << endl;
        cout << "Cost: " << cost << endl;
    }
};

void solution :: getData(int a, float b){
    number = a;
    cost = b;
}

int main(){
    solution s;
    s.getData(100, 200.35);
    s.putData();
    solution y;
    y.getData(50, 23.5);
    y.putData();
    return 0;
}