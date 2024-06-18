#include <iostream>

using namespace std;

int main(){

    //Common Ternary Operators
    /*
    && - check if 2 conditions are true 
    || - check if at least 1 condition is true
    ! - NOT operator or reverses the logical state of its operand
    */

   int temp;
   bool healthy = false;
   cout << "Enter your temprature : "<<endl;
   cin >> temp;

   if(temp > 0 && temp < 37){
    cout<<"You have cold!\n"<<endl;
   }
   else if(temp >= 37 || temp <= 38){
    cout<<"You are Normal!\n"<<endl;
   }
   if(!healthy /*This means the same as healthy == false*/){
    cout<<"You are not healthy"<<endl;
   }
   else{
    cout<<"This is not good :("<<endl;
   }
   
   return 0;
}