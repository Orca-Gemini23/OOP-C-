#include<iostream>
#include <time.h>
using namespace std;
int main(){
    int guess;
    int random_number;
    srand(time(NULL)); // if you run this code many times, 
    // you will get the same result!
    // Hence initializes the seed of the random in each run of the code
    // using time(null) to set a different seed of random through srand.
    random_number = rand() % 100 + 1; // will give 99 + 1;

    cout << "Guess a number from 1 to 100: ";

    do{
        if(!(cin >> guess)){
        cout << "Please enter only numbers" << endl;
        cin.clear(); // Restore input stream working state
        cin.ignore(10000, '\n'); // ignore any garbage value involved.
    }
    else{
        if(random_number < guess){
            cout << "The secret number is lower than" << guess << endl;
        }
        else if(random_number > guess){
            cout << "The secret number is higher than" << guess << endl;
        }
        else{
            cout << "You guessed it: " << random_number << endl;
        }
    }while(random_number != guess);
    }
    
    cout << "Random: " << random_number << endl;
    return 0;
}