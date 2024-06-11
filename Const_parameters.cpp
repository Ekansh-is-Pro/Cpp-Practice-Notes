#include <iostream>

using namespace std;

/*
Const Parameter = parameter that is effectively read-only cocde is more secure & conveys intent useful for 
                  references and pointers. By applying this we can prevent anyone from changing or reassigning 
                  that variable. Making it immutable.
*/

void printInfo(string name, int age);

int main(){
    string name = "Ekansh";
    int age = 16;
    cout << "\033[2J\033[1;1H";
    printInfo(name, age);
    return 0;
}

void printInfo(const string name, const int age){
    cout << "Your name is : " << name << endl;
    cout << "And your age is : " << age << endl;
}