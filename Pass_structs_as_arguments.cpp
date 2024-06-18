#include <iostream>

using namespace std;

struct Cars
{
    string model;
    int year;
    string color;
};

void printCar(Cars car);

int main(){
    cout << "\033[2J\033[1;1H";

    Cars car1;
    Cars car2;

    car1.model = "Mustang";
    car1.year = 2024;
    car1.color = "Black";
    printCar(car1);
    car2.model = "BMW";
    car2.year = 2024;
    car2.color = "Black & White";
    printCar(car2);
    return 0;
}

//We are doing this using Pass by Value here. Hence we are just making a copy of the input argument
//But we can also add '&' before the variable name to do Pass by Value instead.
void printCar(Cars car){
    cout << car.model << endl;
    cout << car.year << endl;
    cout << car.color << endl; 
}

//If we want to modify the value we have been given then we must use Pass by Value in such case
//Or else the function will modify only the copy of the variable will return nothing. 
//This is an important point to be noted down while dealing with such cases.