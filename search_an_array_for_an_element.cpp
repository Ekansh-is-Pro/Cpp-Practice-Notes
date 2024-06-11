#include <iostream>

using namespace std;

int searchArray(string array[], int size, string element);

int main(){
    string food[] = {"samosa" , "pizza", "balls", "cream"};
    int size = sizeof(food)/sizeof(food[0]);
    int index;
    string myFood;
    cout << "\033[2J\033[1;1H";
    cout << "Enter element to search for: " << endl;
    getline(cin, myFood);
    index = searchArray(food , size, myFood);
    if(index != -1){
        cout << myFood << " is at index " << index;
    }
    else{
        cout << myFood << " is not in this array" << endl;
    }

}

int searchArray(string array[], int size, string element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i; //This is a linear saerch here
        }
    }
    return -1; //It is used to show that the task failed.
}

/*
Linear Search = We begin to check the first element of the array. If it's equal. Good.
If it's not equal then we will go for the next element and this continues till we get the solution or till the array ends.
*/