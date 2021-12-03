// The common field cricket chirps in direct proportion to the current temperature.
// Adding 40 to the number of time a cricket chirps in a minute, then dividing that value by 4 gives us the temperature.
// Write a program that takes as input the number of chirps in a minute and prints the current temperature. For example,

#include <iostream>
#include <iomanip>
using namespace std;
#define min 60

int cricket(void){
    int chirps;
    cout << " Enter the number of chirps made by the cricket in a minute: ";
    cin >> chirps;
    float temp = (40 + (chirps))/4;
    cout << " The temperature is: " << setprecision(2) << temp << " degrees" << endl;
    return temp;
}

int main(){
    cricket();
    return 0;
}