#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    cout << "Your choice : ";
    showChoice(player);
    cout << endl;
    cout << "This is value of player : " << player << endl;
    cout << endl;
    computer = getComputerChoice();
    cout << "Computer choice : ";
    showChoice(computer);
    cout << endl;
    chooseWinner(player , computer);

    return 0;
}

char getUserChoice(){
    char player;
    cout << "Rock Paper Scissors Game!" << endl;
    do
    {
        cout << "Choose one of the following" << endl;
        cout << "**************************************************" << endl;
        cout << "'r' for Rock" << endl;
        cout << "'p' for Paper" << endl;
        cout << "'s' for Scissors" << endl;
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');
    
    return player;
}

char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:return 'r';
    case 2:return 'p';
    case 3:return 's';
    }  
    return 0;
}

void showChoice(char choice){
    switch (choice)
    {
    case 'r':cout << "Rock";
        break;
    case 'p':cout << "Paper";
    break;
    case 's':cout << "Scissors";
    break;
    }
}

void chooseWinner(char player, char computer){
    switch (player)
    {
    case 'r' : if(computer == 'r'){
                    cout << "It's a tie !" << endl;
                }
                if(computer == 'p'){
                    cout << "You lose !" << endl;
                }
                else
                {
                    cout << "You win! " << endl;
                }
                break;
    case 'p' : if(computer == 'r'){
                    cout << "You Win!" << endl;
                }
                if(computer == 'p'){
                    cout << "It's a tie!" << endl;
                }
                else
                {
                    cout << "You lose! " << endl;
                }
                break;
    case 's' : if(computer == 'r'){
                    cout << "You lose!" << endl;
                }
                if(computer == 'p'){
                    cout << "You Win !" << endl;
                }
                else
                {
                    cout << "It's a tie! " << endl;
                }
                break;   
    default : cout << "No input " << endl;
    break;       
}
}