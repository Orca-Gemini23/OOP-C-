#include <iostream>
using namespace std;

class calTime{
    int hours;
    int minutes;
    public:
    void getTime(int h, int min){
        hours = h;
        minutes = min;
    }
    void displayTime(void);

    calTime operator +(calTime t1){
        calTime temp;
        temp.hours = t1.hours + hours;
        temp.minutes = t1.minutes + minutes;
        return temp;
    }
};

void calTime :: displayTime(void){
    cout << "Total time is: " << hours << " hours " << minutes << " minutes" << endl;
}
int main(){
    calTime t2, t3, t4;
    t2.getTime(5, 3);
    t3.getTime(7, 9);

    t4 = t2 + t3;
    t4.displayTime();
    return 0;
}
// cout << "HEllo world" << endl;