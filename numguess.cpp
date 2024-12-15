//number guesser game

#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "\n----------RANDOM NUMBER GUESSER-------------\n\n";
    int num;
    int guess;
    int tries;
    
    srand(time(NULL));
    num = (rand() % 100) + 1;
    
    do {
        cout << "Guess a number between (1-100): ";
        cin >> guess;
        tries++;
        if(guess > num)
        cout << "Too high!" << endl;
        else if(guess < num)
        cout << "Too low!" << endl;
        else
        cout << "Correct! Number of tries: " << tries << endl;
    }
    while(guess!=num);
    

    return 0;
}