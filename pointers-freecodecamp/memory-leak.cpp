#include <bits/stdc++.h>
using namespace std;

int cash = 100;


// instead of char[3] as the local var, allocating it in the
// heap , will increase the memory consumption.
void Play(int bet){
    char c[3] = {'J', 'Q', 'K'};
    cout << "Shuffling" << endl;
    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        int x = rand() % 3; // output a value from 0 to 3;
        int y = rand() % 3;
        // the play() has a pointer variable pointing to the heap but 
        // the pointer var is on the stack..
        int temp =  c[x];
        c[x] = c[y];
        c[y] = temp; // swaps characters at pos x and y
    }
    int guess;
    cout << "What's the position of the queen" << endl;
    cin >> guess;
    if(c[guess - 1] == 'Q'){
        cash += 3*bet;
        cout << "You win" << endl;
        cout << "Total cash: " << cash << endl;
    }
    else{
        cash -= bet;
        cout << "You lose" << endl;
    }
}


int main(){
    int bet;

    while(cash > 0){
        cout << "What is your bet ? " << endl;
        cin >> bet;

        if(bet == 0 || bet > cash){
            break;
        }
        Play(bet);
        // each time the play func is called the memory is allocating itself multiple times.
        // also you need to de-allocate the memory everytime.
    }      
    return 0;
}