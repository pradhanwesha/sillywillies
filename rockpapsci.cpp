#include <bits/stdc++.h>
using namespace std;

char userch();
char compch();
void showch(char ch);
void winner(char player, char comp,string name);
//==========================================
int main() {
    cout << "\n----------------ROCK-PAPER-SCISSORS-----------------\n";
    string name;
    cout << "\nEnter your name: ";
    cin >> name;
    char player, comp;
    player = userch();
    cout << "Your choice: ";
    showch(player);
    comp = compch();
    cout << "Computer's choice: ";
    showch(comp);
    winner(player,comp,name);
    return 0;
    
}
//------------------------------------------
char userch(){
    char player;
    do{
    cout << "Choose one of the following\n";
    cout << "'r' for rock\n";
    cout << "'p' for paper\n";
    cout << "'s' for scissors\n";
    cin >> player;
    }
    while(player!='r'&&player != 'p'&&player!='s');
    
    return player;
    
}
//------------------------------------------
char compch(){
    srand(time(0));
    int num = (rand()%3)+1;
    
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
//------------------------------------------
void showch(char ch){
    switch(ch)
    {
        case 'r': cout <<"Rock\n";
        break;
        case 'p' : cout << "Paper\n";
        break;
        case 's' : cout << "Scissors\n";
        break;
    }
}
//------------------------------------------
void winner(char player, char comp, string name){
    switch(player){
        case 'r': 
        if(comp == 'r')
        cout << "It's a tie!" << endl;
        if(comp == 'p')
        cout << "Computer won!" << endl;
        if(comp == 's')
        cout << name << " won!" << endl;
        break;
        
        case 'p': 
        if(comp == 'p')
        cout << "It's a tie!" << endl;
        if(comp == 's')
        cout << "Computer won!" << endl;
        if(comp == 'r')
        cout << name << " won!" << endl;
        break;
        
        case 's': 
        if(comp == 's')
        cout << "It's a tie!" << endl;
        if(comp == 'r')
        cout << "Computer won!" << endl;
        if(comp == 'p')
        cout << name << " won!" << endl;
        break;
    }
    
}