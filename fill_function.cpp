#include <iostream>

using namespace std;

/*
fill function = fills a range of elements with a specified value 
                fill(being , end , value)
*/

int main(){
    const int SIZE = 100;
    string food[SIZE];
    cout << "\033[2J\033[1;1H";
    fill(food, food + SIZE/2, "pizza");
    fill(food + SIZE/2, food + SIZE, "sigma");
    for(string element : food){
        cout << element << endl;
    }
    return 0;
}