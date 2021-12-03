#include <iostream>
using namespace std;

class temp{   // user defined data types..
    private:
    float celsius; // built data types ..
    float fahrenheit;

    public:
    void read(){
        cout << "Enter the temp in celsius ::" << endl;
        cin >> celsius;
        celsius = (1.8 * fahrenheit) + 32;
    }
    void show(){
        cout << "The converted temp is ::" << celsius << endl;
    }
};
int main(){
    temp t;
    t.read();
    t.show();
    return 0;
}