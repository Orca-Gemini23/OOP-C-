// Roll no: E224
// Name: Yash Patel
#include <iostream>
using namespace std;

class Shapes{
    int Area;
    public:
    int calArea(float length, float breadth){
        Area = length * breadth;
        return Area;
    }
    int calArea(float side){
        Area = side * side;
        return Area;
    }
};

int main(){
    Shapes S1;
    cout << "Area of the rectangle is: "<< S1.calArea(5,3) << endl;
    cout << "Area of square: " << S1.calArea(6) << endl;
    return 0;
}