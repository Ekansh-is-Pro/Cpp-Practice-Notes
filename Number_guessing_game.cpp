#include <iostream>
#include <ctime>

using namespace std;

int main(){
    int num; // will hold our number
    int guess; // will hold the user's entered number
    int tries; // will hold the number of tries available

    srand(time(NULL));

    num = (rand() % 100) + 1;

    cout << "************* Number guessing game **************" << endl;

    do{
        cout << "Enter a guess between 1 to 100! : "<<endl;
        cin >> guess;
        tries++;

        if(guess > num){
            cout << "Too high!" << endl;
        }
        else if(guess < num){
            cout << "Too low!" << endl;
        }
        else{
            cout << "Correct !! # of tries : " << tries << endl;
            cout << "******************************************************" << endl;
        }

    }while(guess != num);
    
    return 0;
}