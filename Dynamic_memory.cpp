#include <iostream>

using namespace std;

/*
Dynamic Memory - Memory that is alloccated after the program is already
                 Compiled and Running. Use the 'new' operator to allocate in the heap
                 rather than the stack

                 Useful when we don't know how muh memory we'll need. Makes
                 our programs more flexible, especially when accepting user input
*/

void makeGrades_usingArrays();

int main(){
    int *pNum = NULL; //A good pratice is to assign a value of NULL to a pointer if not being used at the beginning

    pNum = new int; //the 'new' operator will return an address which will be stored in pNum because it's a pointer pointing to a memory location where we are going to store our integer

    *pNum = 21; // deferencce --> variable --> assign the value to it when being used

    cout << "\033[2J\033[1;1H";

    cout << "Address : " << pNum << endl;
    cout << "Value : " << *pNum << endl;

    delete pNum; //It's a good practie to delete the value after being used to avoid any more memory leaks
    
    //A good example of this also shown below. 
    
    makeGrades_usingArrays();
    
    return 0;
}

void makeGrades_usingArrays(){
    char *pGrades;
    int size;

    cout << "How many grades do you want to enter in? : " << endl;
    
    cin >> size;

    pGrades = new char[size];

    for(int i = 0; i <size; i++){
        cout << "Enter Grade #" << i << " : ";
        cin >> pGrades[i];
    }
    for(int i = 0; i < size; i++){
        cout << pGrades[i] << " ";
    }
    
    delete[] pGrades;
}