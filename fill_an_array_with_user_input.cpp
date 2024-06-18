#include <iostream>

using namespace std;

int main(){
    string foods[10];
    //NOTE : Arrays are a static data structure that means that during the execution of the program
    //       we can't change the size of the array. This will later come in dynamic memmory where we will do this.
    int size = sizeof(foods)/sizeof(foods[0]);
    cout << "\033[2J\033[1;1H";
    for(int i = 0; i < size; i++){
        cout << "Enter a food you like #" << i + 1 << " : " << endl;
        getline(cin, foods[i]); 
    }
    for(string food : foods){
        cout << food << " ";
    }
    return 0;
}