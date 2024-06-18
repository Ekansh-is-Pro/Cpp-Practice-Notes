/* Usage : condtion ? expression1 : expression2 
Ternary Operator ?: = replacement to an if/else operator*/

#include <iostream>

using namespace std;

int main (){
    int marks;
    cout  << "Enter your Marks : ";
    cin >> marks;
    
    // Ternary Operator
    marks >= 75 ? cout << "You passed yay" <<endl : cout << "You FAILED FOR BEING A B!TCH" <<endl;
    //Cond.  symbol        Runs if true                           Runs if False
}