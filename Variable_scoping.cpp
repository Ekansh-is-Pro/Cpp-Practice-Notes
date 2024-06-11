#include <iostream>

using namespace std;

int mynum = 5; //global variable
/*
it is strongly suggested to avoid global variable as it pollutes the global namespace also variables declared inside a function is much more 
secure to use. A function will always resort to using local variable rather than global variable too.
*/

void printnum();

int main(){
    /*
    Local Variabes : declared inside a function or block {}
    Globla Variables : declared outside of all funtions
        NOTE : It is legal to use the same variable name and value as long as it is in a different scope. 
    */

    int mynum = 1; //local variable
    printnum();
    cout << ::mynum << endl;
    return 0;
}

void printnum(){
    int mynum = 2; //local variable
    cout << mynum << endl;
    cout << ::mynum << endl; //This will print the global vairable using scope resolution operator.
}