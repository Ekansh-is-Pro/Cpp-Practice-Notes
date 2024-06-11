#include <iostream>

using namespace std;

string makeName(string string1, string string2);

int main(){
    /* 
    Return : returns the value back to the spot where you called the encompassed the function.
    */
    string firstname = "Ekansh";
    string lastname = "Jaiswal";
    string fullname = makeName(firstname , lastname);
    cout << "Hi " << fullname << endl;
}

string makeName(string string1, string string2){
    return string1 + " " + string2;
}