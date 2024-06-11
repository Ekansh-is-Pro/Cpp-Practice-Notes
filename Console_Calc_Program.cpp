#include <iostream>

using namespace std;

int main(){
    char op;
    double num1,num2,resul;
    cout << "************ CALCULATOR TERMINAL ******************\n";
    cout << "What do you want to perform? (+,-,*,/) : "<<endl;
    cin >> op;
    cout << "Enter number 1 : "<<endl;
    cin >> num1;
    cout <<  "Enter number 2 : "<< endl;
    cin >> num2;
    switch (op)
    {
    case '+':
        resul = num1 + num2;
        cout << "Result : " << resul << endl;
        break;
    case '-':
        resul = num1 - num2;
        cout << "Result : " << resul << endl;
        break;
    case  '*':
        resul= num1 * num2;
        cout << "Result : " << resul << endl;
        break;
    case  '/':
        resul = num1 / num2;
        if(num2 == 0){
            cout << "Error! Division by zero is not allowed." << endl;}
        else{
            cout << "Result : " << resul << endl;
        }
        break;
    default:
        cout  <<"Error! Invalid operator. Please enter + , - , / or * .\n";
        break;
    }
    cout << "***************************************************";
    return 0;
}