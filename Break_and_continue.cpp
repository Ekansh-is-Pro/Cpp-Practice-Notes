#include <iostream>

using namespace std;

int main(){
    /*
    Break : break out of a loop
    Continue : used to skip current iteration
    */
   for(int i = 1 ; i <= 20 ; i++){
    if(i == 5){
        cout<<"5 is now deleted"<<endl;
        continue; /* This will skip the iteration when i = 7 */
    }
    if(i == 13){
        cout << "We have broken out of this loop" << endl;
        break; /*If we only use this then we notice that the loop immediately ends with 12 as being the last number in the list*/
    }
    cout << i << endl;
   }
   return 0;
}