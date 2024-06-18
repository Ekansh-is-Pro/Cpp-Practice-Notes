#include <iostream>

using namespace std;

/*
Memory address = A location in memory where data is stored.
A memory address can be accessed with & (address of operator)
*/

int main(){
    cout << "\033[2J\033[1;1H";
    string name = "Ekansh";
    int age = 16;
    bool student = true;

    cout << "Item : " << name << " is located at " << &name << " in your PC"<< endl;
    cout << "Item : " << age << " is located at " << &age << " in your PC"<< endl;
    cout << "Item : " << student << " is located at " << &student << " in your PC"<< endl;
    return 0;
}