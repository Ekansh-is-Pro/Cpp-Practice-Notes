#include <iostream>

using namespace std;

int main(){
    string name;

    /*
    Here if we use an if statement instead of while loop then we notice that the program stops and gives an incomplete reply of just Helo: 
    Hence we use a while loop in such cases so that we run this loop till we get an input of that user.
    */
    while(name.empty()){
        cout << "Enter your name bruh" << endl;
        getline(cin, name);
    }

    cout << "Hellow : " << name;
}