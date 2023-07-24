#include<iostream>
using namespace std;
 int main () 
 {
     int secretNum = 7;
     int guess;
     int guesscount = 0;
     int guessLimit = 4;
     bool outofguesses = false;
 
    while (secretNum != guess && !outofguesses){
        if(guesscount < guessLimit){
        cout << "enter guess: ";
        cin >> guess;
        guesscount++;

        }else {
            outofguesses = true;
        }
                
    }
        if(outofguesses){

            cout << "YOU LOSE";
        } else{
            cout << "YOU WIN";
        }


     return 0;
 }