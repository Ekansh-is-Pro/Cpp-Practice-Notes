#include <iostream>

using namespace std;

/*
Object - A collection of attributes and methods.
         They can have characteristics and could perform actions
         Can be used to mimic real world items(Ex. Phone, Book , etc)
         Created from a class which acts as a "blue-print".
*/

class Human{
    //This is known as a Public Access Modifier below.
    //The values stored below will be publically accessible to everyone in the program.
    public:
        string name;
        string occupation;
        int age;
        bool sigma = true;
        //The above are some of the Attributes of a human like his name, age, occupation, etc.
        //We can also set some defult values / parameters in the class.
        //A method is a function that belongs to a class.
        //It's something that an object can do or perform action.
        void eat(){
            cout << "This person just ate food. " << endl;
        }
        void drink(){
            cout << "This person just drank liquid. " << endl;
        }
        void sleep(){
            cout << "This person just slept." << endl;
        }
};

int main(){
    cout << "\033[2J\033[1;1H";

    Human human1; //Now human1 is an object which has the properties and methods of a Human (here the class)
    //Now we'll assign the human some attributes.
    human1.name = "Ekansh";
    human1.occupation = "Sigma Male";
    human1.age = 16;

    cout << human1.name << endl;
    cout << human1.occupation << endl;
    cout << human1.age << endl;
    cout << human1.sigma << endl; //1 means true in boolean words
    //Now we will invoke the moethods which this human can perform as shown below
    human1.eat();
    human1.sleep();
    human1.drink();
    return 0;
}