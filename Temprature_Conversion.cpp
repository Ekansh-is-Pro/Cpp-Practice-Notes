#include <iostream>
using namespace std;

double temp;
char unit;

int main(){
    cout << "********** Temprature Converter ***********" << endl;
    
    cout << "F : Farhenite\n" << "C : Celsius\n" << endl;
    cout << "What unit would you like to convert into" << endl;
    cin >> unit;
    if(unit == 'F' || unit == 'f'){
        cout << "Enter the Temprature in Celsius : "<<endl;
        cin >> temp;
        temp = (1.8 * temp + 32.0);
        cout << "Tempreature is :"<<temp << "F\n"<< endl;
    }
    else if(unit == 'C' || unit == 'c')
    {
        cout << "Enter the temprature in Farenhite : "<<endl;
        cin >> temp;
        temp = (temp - 32.0)/1.8;
        cout << "Tempreature is :"<<temp << "C\n"<< endl;
    }
    else{
        cout << "Please enter in only C or F"<<endl;
    }
    
    cout << "*******************************************" <<endl;
    return 0;
}

//1:29:21