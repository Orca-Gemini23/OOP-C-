#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

class time{  // object time to used as arguement. 
    int hours;
    int minutes;
    public:
    void gettime(int h, int m){
        hours = h;
        minutes = m;
    }
    void puttime(void){
        cout << hours << "Hours and ";
        cout << minutes << "minutes" << endl;
    }
    void sum(time, time); // declaration with objects as arguements;;
};

void time :: sum(time t1, time t2){ 
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;    
}
int main(){
    time T1, T2, T3;
    T1.gettime(2, 45);
    T2.puttime(3, 30);
    T3.sum(T1, T2);
    cout << "T2 = "; T2.puttime();
    return 0;
}