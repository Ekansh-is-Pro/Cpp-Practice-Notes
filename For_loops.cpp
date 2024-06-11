#include <iostream>

using namespace std;

int main(){

    /*
    For Loop : A loop that exectues a code block a speified amount of times
    */
   for(int index/*or i only */ = 1; index <= 3; index++){/* We can also change the amout we increment or decrement in this i++ part*/
    cout << "This will print 3 times!!" << endl;
   }
   for(int i = 10 ; i >= 0; i--){
    cout << i << endl;
   }
   cout << "BOOOMBBOMBOBMOBMBOMB" << endl;
   return 0;
}