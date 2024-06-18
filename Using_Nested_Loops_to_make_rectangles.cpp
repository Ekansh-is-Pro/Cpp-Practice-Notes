#include <iostream>

using namespace std;

int main(){
    /*
    The aim of this program is to print a rectangle using user input size and symbols
    */
    char sym;
    int l,b;
    cout << "********** RECTANGLE GENERATOR ***********" << endl;
    cout << "Enter a symbol to make ractangle of : " << endl;
    cin >> sym;
    cout << "Enter the length of rectangle : " << endl;
    cin >> l;
    cout << "Enter the breadth of rectangle : " << endl;
    cin >> b;
    cout << "Here we goo ! " << endl;
    cout << "******************************************" << endl;

    for(int i = 1; i <= b ; i++){
        for (int j = 1; j <= l; j++)
        {
            cout << sym << ' ';
        }
        cout << endl; /* or cout << '\n' ; */   
    }
    return 0;
}

//1:51:54