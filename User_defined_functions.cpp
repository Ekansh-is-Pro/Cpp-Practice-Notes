#include <iostream>

using namespace std;


//But this might not work if we write the function after the name funtion this is because we read
//our code from top to bottom and we called a function before even definig it. The solution to this is shown below.

void testing(string sigma, int sigma_age);

int main(){

    /*
    A function is a user defined block of code which can be used again whenever required
    */
    string name = "Ekansh";
    int age = 17;
    testing(name, age);
    return 0;
}

void testing(string sigma, int sigma_age){
    cout << "This program works if this prints properly" << endl;
    cout << "Hi there " << sigma << endl;
    cout << "Your age is " << sigma_age << endl;
    int a=5,b=6;
    int sum = a + b;
    cout << sum << endl;
}

//2:07:43