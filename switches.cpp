#include <iostream>

using namespace std;

int main(){
    //Make a program to tell which number is which month accordingly Eg: January is 1 , December is 12 etc.
    int month;
    cout << "Enter a number between 1-12 for the month : "<<endl;
    cin >> month;
    switch (month)
    {
    case 1:
        cout << "The entered number is for January." << endl;
        break;
    case 2:
        cout << "The entered number is for February." << endl;
        break;
    case 3:
        cout << "The entered number is for March." << endl;
        break;
    case 4:
        cout << "The entered number is for April." << endl;
        break;
    case 5:
        cout << "The entered number is for May." << endl;
        break;
    case 6:
        cout << "The entered number is for June." << endl;
        break;
    case 7:
        cout << "The entered number is for July." << endl;
        break;
    case 8:
        cout << "The entered number is for August." << endl;
        break;
    case 9:
        cout << "The entered number is for September." << endl;
        break;
    case 10:
        cout << "The entered number is for October." << endl;
        break;
    case 11:
        cout << "The entered number is for November." << endl;
        break;
    case 12:
        cout << "The entered number is for December." << endl;
        break;
    
    default:/*Kind of like the else statement*/
        cout << "Error! The month must be between 1 and 12." << endl;
        break;
    }
}