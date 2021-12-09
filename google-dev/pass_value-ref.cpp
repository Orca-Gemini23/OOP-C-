// Write a function called accelerate() that takes as input the speed of a vehicle, and an amount.
// The function adds the amount to the speed to accelerate the vehicle.
// The speed parameter should be passed by reference, and amount by value

#include <iostream>
using namespace std;

// Speed is passed by reference, and amount by value
void accelerate(int &speed, int amount) {
  speed = speed + amount;
}

int main(void) {
  int current_speed = 30;
  int accel_amount;

  cout << "current speed: " << current_speed << endl;
  cout << "Accelerate by how much?" << endl;
  cin >> accel_amount;

  accelerate(current_speed, accel_amount);
  cout << "accelerated speed: " << current_speed << endl;
}