#include<iostream>
using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guesscount = 0;
    int guesslimit = 3;
    bool outofguesses = false;

    while(secretNum !=guess && !outofguesses){
        if(guesscount < guesslimit){
            cout << " enter guess:";
            cin >> guess;
            guesscount++;

        }else{
            outofguesses = true;
        }

       
    }
if(outofguesses){
    cout <<"you lose!";
}else{
cout << "you win";
}


    return 0;
}