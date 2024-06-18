#include <iostream>

using namespace std;

void sortArray(int array[], int size);

int main(){
    int array[] = {1 , 84 , 324 , 32 , 4 , 7, 44, 456, 3466, 67, 6587689, 234, 6765, 324};
    int size = sizeof(array) / sizeof(array[0]);
    sortArray(array, size);
    cout << "\033[2J\033[1;1H";

    for(int element : array){
        cout << element << " ";

    }
    return 0;
}

/*
Logic = Here we are gonna use the Bubble sort algorithm to handle this although there are more and better ways to do this.
        It will first start with the left most value and check if the right value is greater than or smaller than it
        If smaller than the value(left one) will be moved to the right and then again it will repeat the above line.
        If greater than the value then we will skip the value and chose the right value to sort and this will go on
        till all the values have been properly sorted / arranged.
NOTE =  We took as size - 1 because the larger value will naturally gravitate towards the end of the array so this
        reduces an extra iteration and increases the preformance of the code.
*/

void sortArray(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 ; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}