#include <iostream>

using namespace std;

/*
Pointers = variable that stores a memory address of another variable 
            sometimes it's easier to work with addresses

            & = address-of operator
            * = derefernce operator
*/

int main(){
    string name = "Ekansh";
    int age = 16;

    //Pointer pointing towards the name
    string *pName = &name;
    int *pAge = &age;

    cout << "\033[2J\033[1;1H";
    //This will give me the address of the name variable in the memory
    cout << pName << endl;
    //This will now be de-referenced to the actual variable i.e name
    cout << *pName <<endl;
    cout << *pAge<<endl;
    return 0;
}