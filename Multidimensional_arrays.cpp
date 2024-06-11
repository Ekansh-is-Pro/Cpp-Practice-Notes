#include <iostream>

using namespace std;

/*
Multidimensional Arrays are more like 2D arrays which we can use it in many ways as we like to
*/

int main(){
    //We don't often need to set the row size but we are required to set the column size.
    string students[/*rows*/][3/*columns*/] = {{"chunnu","munnu","heheh"},
                             {"lotu","motu","chotu"},
                             {"ram","dhyam","sham"}}; //3 rows and 4 columns hence we get 12 elements
    
    int rows = sizeof(students)/sizeof(students[0]); //The total size of one row is being divided
    int columns = sizeof(students[0])/sizeof(students[0][0]); //The size of a single value is being divided by the size of the row
    cout << "\033[2J\033[1;1H";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << students[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}