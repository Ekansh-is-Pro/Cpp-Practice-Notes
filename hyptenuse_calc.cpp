#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a,b,c;
    cout << "Enter side A :"<<endl;
    cin >> a;
    cout << "Enter side B :" << endl;
    cin >> b;
    a =  abs(a); //to make sure that the
    b = abs(b);
    a = pow(a,2);
    b = pow(b,2);
    c = sqrt(a+b);
    //Or use this
    //c = sqrt(pow(a,2) + pow(b,2));
    cout << "Length of side C is : " << c << endl;
    return 0;
}