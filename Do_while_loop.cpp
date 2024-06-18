#include <iostream>
using namespace std;

int main(){
    /*
    do while loop : Performs a block of code first then repeats the same block if the condition is true
    */
   int num;
    /*
   while(num < 0){
    cout << "Enter a positive number : " << endl;
    cin > num;
   }
   */
  //We notice that this won't work properly and we have to run this once before too to do that so. Hence we use a do while loop in this case.

  do{
    cout << "Enter a positive # : " << endl;
    cin >> num;
  }while(num < 0);

  cout << "The # is : " << num << endl;
  return 0;
}