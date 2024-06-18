#include <iostream>

using namespace std;

/*
Function Template - describes what a function looks like
                    Can be used to generate as many overloaded funtions 
                    as needed, each using different data type.

*/

//This template will work with many differnt data types and will change itself accordingly
template <typename flexible_var_value_1, typename flexible_var_value_2>

//We used 2 templates so that both can support different data types as input or else the input must be of the same type in the function
//We can select which type of variable do we want the function to return. Or we can use the Auto function
//The auto function will automatically decide which type of value should be delivered based on the input.
auto return_max_int(flexible_var_value_1 x, flexible_var_value_2 y){
    return (x > y) ? x : y;
}

int main(){
    cout << "\033[2J\033[1;1H";
    cout << return_max_int(1, 2.1) << endl;
    return 0;
}