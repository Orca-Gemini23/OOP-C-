
#include <iostream>
using namespace std;

class cal_distance{
    int feet, inches;
    public:
    void getData(){
        cout << "Enter the value for the feet and inches: ";
        cin >> feet;
        cin >> inches;
    }
    void display(void);
    cal_distance operator+(cal_distance c1){
        cal_distance temp;
        temp.feet = c1.feet + feet;
        temp.inches = c1.inches + inches;
        return temp;
    }
};

void cal_distance :: display(void){
    cout << "Total distance is: " << feet << " feet " << inches << " inches " << endl;
}

int main(){
    cal_distance d1, d2, d3;
    d1.getData();
    d2.getData();
    d3 = d1 + d2;
    d3.display();
    return 0;
}