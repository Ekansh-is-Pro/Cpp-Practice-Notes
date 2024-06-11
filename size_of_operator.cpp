#include <iostream>
#include <conio.h>

using namespace std;

/*
sizeof() = determines the size in byte of a : variable , data type , class , objects , etc.
*/

int main(){
    double gpa = 2.5;
    string name = "Ekansh";
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    string names[] = {"ekansh", "shyrenahs", "ksdghkdsufhdskj", "kdfshkjdsfhfsdg"};
    cout << "\033[2J\033[1;1H"; //Used to clear sccreen for output
    cout << sizeof(gpa) << " bytes" << endl;
    cout << sizeof(name) << " bytes" << endl;
    cout << "This array : " << grades << " has " << sizeof(grades)/sizeof(char) << " elements. " << endl;
    cout << "This array : " << names << " has " << sizeof(names)/sizeof(string) << " elements. " << endl;
    return 0;
}

//3:01:33