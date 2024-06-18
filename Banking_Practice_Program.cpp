#include <iostream>
#include <iomanip>

using namespace std;

void show_bal(double bal);
double depo();
double withdrw(double bal);

int main(){
    double bal = 123.45;
    int choice = 0;
    cout << "\033[2J\033[1;1H"; //Used to clear sccreen for output
    do{
        //cout << "\033[2J\033[1;1H"; //Used to clear sccreen for output
        cout << "**************** BANK OF EKANSH ********************" << endl;
        cout << "Enter your choice : " << endl;
        cout << "****************************************************" << endl;
        cout << "1. Show Balance " << endl;
        cout << "2. Deposit Money " << endl;
        cout << "3. Withdraw money " << endl;
        cout << "4. Exit " << endl;
        cin >> choice;
        cin.clear(); //this will reset any error flags and prevents the program to break due to bad input by user
        fflush(stdin); //this will clear the input buffer by flushing in

        switch (choice)
        {
        case 1: cout << "\033[2J\033[1;1H"; //Used to clear sccreen for output
                show_bal(bal);
                break;
        case 2: cout << "\033[2J\033[1;1H"; //Used to clear sccreen for output
                bal += depo();
                show_bal(bal);
                break;
        case 3: cout << "\033[2J\033[1;1H"; //Used to clear sccreen for output
                bal -= withdrw(bal);
                show_bal(bal);
                break;
        case 4: cout << "\033[2J\033[1;1H"; //Used to clear sccreen for output
                cout << "Thanks for visiting ! " << endl;
                break;
        default: cout << "Invalid Choice" << endl;
    }
    }while (choice != 4); 
}

void show_bal(double bal){
    cout << "Your balance is ₹ " << setprecision(2) << fixed <<bal << endl; //this will display our balance by keeping a space of 2 decimal points for precision.
}
double depo(){
    
    double amt = 0;
    cout << "Enter amount to be deposited : " << endl;
    cin >> amt;

    if(amt > 0){
        return amt;
    }
    else{
        cout << "That's not a valid amount." << endl;
        return 0;
    }
}
double withdrw(double bal){
    double amt;
    cout << "Enter amount to be withdrawn : " << endl;
    cin >> amt;
    
    if(amt > 0 && amt < bal){
        return amt;
    }
    else if (amt > 0 && amt > bal)
    {
        cout << "Sorry you don't have enough cash to withdraw from." << endl;
        return 0;
    }
    else{
        cout << "That's not a valid amount." << endl;
        return 0;
    }

    return 0;
}
