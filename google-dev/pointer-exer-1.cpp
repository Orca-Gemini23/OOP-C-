// The integer 36 has a peculiar property: it is a perfect square, and is also the sum 
// of the integers from 1 through 8. The next such number is 1225 which is 352,
//  and the sum of the integers from 1 through 49. Find the next number that is a perfect square
// and also the sum of a series 1...n. This next number may be greater than 32767. 
// You may use library functions that you know of, (or mathematical formulas) to make your program run faster.
//  It is also possible to write this program using for-loops to determine 
// if a number is a perfect square or a sum of a series. 
// (Note: depending on your machine and your program, it can take quite a while to find this number.)

#include <iostream>
#include <cmath>

bool isPerfectSquare(long n) {
  int sqr = (int) sqrt(n);
  return sqr * sqr == n;
}


int main() {
  long start = 1225;
  int incrementer = 50;
  while (true) {
    start += incrementer;
    if (isPerfectSquare(start)) {
      std::cout << start << std::endl;
      std::cout << incrementer << std::endl;
      return 0;
    }
    ++incrementer;

  }
  
}