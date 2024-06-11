#include <iostream>

using namespace std;

int main(){
    cout << "\033[2J\033[1;1H";
    string names[] = {"chotu", "motu", "lotu", "lalu" , "bhalu", "ekansh"};
    for(int i = 0 ; i < sizeof(names)/sizeof(string) ; i++){
        cout << "Student " << i << " in the list is " << names[i] << endl;
    }
    return 0;
}