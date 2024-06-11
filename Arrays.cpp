#include <iostream>

using namespace std;

/*
Arrays - a data structure that ccan hold multiple values. the values are accessed by an index nos. 
Kind of like a variable that holds multiple values
*/

int main(){
    string car[] = {"BMW M8", "Mustang" , "Porsche 911"};
    string food[3];
    //Arrays can only contain data of only one type like here only strings
    car[2] = "Maruti"; // we can change the value at a partiular index within the array here by reassigning it.
    cout << "\033[2J\033[1;1H"; //Used to clear sccreen for output

    cout << car[0] << endl;
    cout << car[1] << endl;
    cout << car[2] << endl;

    //we can also later declare the values for an array by manualy asigning them.
    //but while doing this we also have to assign the array size for it to work as shown above.
    food[0] = "samosa";
    food[1] = "cola";
    food[2] = "sevpuri";

    cout << food[0] << endl;
    cout << food[1] << endl;
    cout << food[2] << endl;
    return 0;
}