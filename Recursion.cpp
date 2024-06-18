#include <iostream>

using namespace std;

/*
Recursion = A teachnique where a function invokes itself from within break a complex concept into
            a repeatable single step

(iterative Vs Recursion)

Pros - less code is cleaner
       useful for sorting and searcching algos

Cons - uses more memory 
        and is slower

*/

void walk(int steps); 

int main(){
    cout << "\033[2J\033[1;1H";
    walk(10);
    return 0;
}

//Takes the number of steps as input and then walks!
//This is an Iterative Approach
/*void walk(int steps){
    for(int i = 0; i < steps ; i++){
        cout << "You take a step!"<<endl;
    }
}*/

//Recursive method
void walk(int steps){
    if (steps > 0)
    {
        cout << "You take a step!" << endl;
        walk(steps - 1);
    }
    
}