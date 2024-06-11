#include <iostream>

using namespace std;

int main(){
    /*
    Nested Loop : Just a loop inside a loop and doesn't depends on the kind of loop we are in
    */
   for(int i = 1; i <= 5 ; i++){
    for(int j = 1 ; j <= 10; j ++){
    cout << j << endl;
   }
   }
   // This code will now print 1 to 10 numbers 5 times
    return 0;
}