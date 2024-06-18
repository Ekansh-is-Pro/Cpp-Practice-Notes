#include <iostream>

using namespace std;

/*
Abstration - Hiding unessecary data from outside an class.
Getter - function that makes a private attribute READBLE.
Setter - function that makes a private attribute WRITEABLE.
*/

class Stove{
    //public:
        //int temprature = 0; //This member can be accessed and modified by any function outside of the class
    private: 
        int temprature = 0;//Now any outside funtion doesn't have any access to this value of the function.
        //Now to access this value we need to write a getter which makes this attribute READABLE and a setter makes the attribute WRITEABLE i.e 
        //anyone can modify the value using the SETTER.
    public:
    Stove(){}//Just to handle the None arguments
    Stove(int temprature){
        //this->temprature=temprature;
        //Now we won't need the above line we can instead use the setter inside our constructor.
        setTemprature(temprature);
    }
    //This is a getter function.
    int getTemprature(){
        return temprature; //This makes the value READABLE to other functions outside the class.
    }
    //This is a setter function
    void setTemprature(int temprature){
        //We can also use Logic inside a setter to check the inputs properly.
        if(temprature < 0){
            this->temprature = 0;
        }
        else if(temprature >= 10){
            this->temprature = 10;
        }
        else{
            this->temprature=temprature;
        }
        //this->temprature = temprature; 
        //It will take the input value and modify it accordingly.
    }
};

int main(){
    cout << "\033[2J\033[1;1H";

    Stove stove(0);
    //stove.setTemprature(5); //Modifying temprature using the setter functions
    cout << "The temp settign is :" << " " << stove.getTemprature() << endl; //And reading the value using the getter function.
    return 0;
}