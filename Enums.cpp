#include <iostream>

using namespace std;

/*
Enums or Enumeration - A user-dfined data type that consists of 
                       paired named integer constants. GREAT if you have
                       a set of potential options.
*/

//We can explicitly assign the values to each one
enum Day {sunday=1, monday=2, tuesday=3, wednesday=4, thursday=5, friday=6, saturday=7};

//Or we can do it implitly where the first will be given 0 by the program itself and so on
enum Ranklist {me , you , others};

int main(){
    cout << "\033[2J\033[1;1H";
    Day today = sunday;
    switch (today)
    {
    case sunday:
        cout << "Today is Sunday!" << endl;
        break;
    case monday:
        cout << "Today is Monday!" << endl;
        break;
    case tuesday:
        cout << "Today is Tuesday!" << endl;
        break;
    case wednesday:
        cout << "Today is Wednesday!" << endl;
        break;
    case thursday:
        cout << "Today is Thursuday!" << endl;
        break;
    case friday:
        cout << "Today is Friday!" << endl;
        break;
    case saturday:
        cout << "Today is Saturday!" << endl;
        break;
    default:
        break;
    }

    Ranklist topper = me;
    switch (topper)
    {
    case 0:
        cout << "You are the topper!" << endl;
        break;
    case 1:
        cout << "The AI are the topper!" << endl;
        break;
    case 2:
        cout << "Other are the topper!" << endl;
        break;
    
    default:
        break;
    }
    return 0;
}