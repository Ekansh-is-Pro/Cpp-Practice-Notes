#include <iostream>

using namespace std;

int main(){
    /*
    foreach loop = loop that eases the transversal over an iterable data set.
    It should be noted that these foreach loops are less flexible and are generally used for purpose as shown below
    as they require less syntax and inputs to function.
    */
    cout << "\033[2J\033[1;1H";
    string names[] = {"chotu", "motu", "lotu", "lalu" , "bhalu", "ekansh"};
    for(string students_name : names){
        cout << "Student " << students_name << " is present" << endl;
    }
    return 0;
}