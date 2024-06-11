#include <iostream>

using namespace std;

void makecode();
void makecode(string language);
void makecode(string language ,string quality);

int main(){
    makecode("c++", "good");
    return 0;
}

void makecode(){
    cout << "You just made some code work!" << endl;
}

void makecode(string language){
    cout << "You just made some code work " << "in " << language << endl;
}

void makecode(string language , string quality){
    cout << "You just made some code work " << "in " << language << " and it quality is " << quality << endl;
}