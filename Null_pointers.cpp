#include <iostream>

using namespace std;

/*
Null Value = a special value that means something has no value.
             When a pointer is holding a null value,
             that pointer is not pointing at any thing. (null pointer)

Null ptr = keyword represents a null pointer literal

nullptr are helpful when determining if an address was successfully assigned to a pointer

When using pointers, be ccareful that your code isn't derefrencing 
null or pointing to a free memmory this will lead to undefined behavior
*/

int main(){
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;
    cout << "\033[2J\033[1;1H";

    if(pointer ==nullptr){
        cout << "Assigning Address failed" << endl;
    }
    else{
        cout << "It works!" <<endl;
        cout << *pointer << endl;
    }

    return 0;
}