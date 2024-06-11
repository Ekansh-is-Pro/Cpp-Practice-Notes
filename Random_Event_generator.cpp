#include <iostream>
#include <ctime>

using namespace std;

int main(){
    /*
    Using switches and random numbers we will make an event generator
    */
    srand(time(NULL));
    int randNum = (rand() % 6) + 1;

    switch (randNum)
    {
    case 1: cout << "You win nothing bruh " << endl;
            break;
    case 2: cout << "You win a car!" << endl;
            break; 
    case 3: cout << "You win a bike!" << endl;
            break;
    case 4: cout << "You win a toy!" << endl;
            break;
    case 5: cout << "You win a dice" << endl;
            break;
    case 6: cout << "You will now die!" << endl;
            break;
    }
    return 0;
}