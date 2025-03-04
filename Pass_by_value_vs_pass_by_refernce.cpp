#include <iostream>

using namespace std;

void swapValue(string &x, string &y);

int main(){
    string x = "Kool-Aid";
    string y = "Water";
    cout << "\033[2J\033[1;1H";
    cout << "Before : (Outside the Function)" << endl;
    cout << "Value of X : "<< x << " and Address is " << &x << endl;
    cout << "Value of Y : " << y << " and Address is " << &y << endl;
    swapValue(x, y);
    cout << "After : (Outside the Function)" << endl;
    cout << "Value of X : "<< x << " and Address is " << &x << endl;
    cout << "Value of Y : " << y << " and Address is " << &y << endl;
    return 0;
}

/* 
   
   Now we will rather make a function to do this job for us rather than doing this manually 
   If we run this wihtout the & then we call this PASS BY VALUE where we just create copy of the data are giving the function
   hence in reality it just swapped the value of copy but not the actual value
   But when we add the memory address for the input then we call this PASS BY REFERCE where we are indicating the function where
   the acutal variable is to be swapped upon.
   
*/

void swapValue(string &x, string &y){
    string temp;
    temp = x;
    x = y;
    y = temp;
    cout << "Inside Function : " << endl;
    cout << "Value of X : "<< x << " and Address is " << &x << endl;
    cout << "Value of Y : " << y << " and Address is " << &y<< endl;
}
