#include <iostream>

using namespace std;

/*
Inheritance - When a class can recive attributes and methods from another class
              The recieving class is known as the child class and the class from which it is recieving 
              is known as the Parent Class.This helps reduce similar code found within multiple classes.
*/

//This is the Parent Class
class Animal{
    public:
        bool alive = true;
    void eat(){
        cout << "This animal is eating" << endl;
    };
};
//Now we will create 2 classes a Dog class and A Cat class which will inherit from the Parent.

//Child class
class Dog : public Animal{
    //We can also add additional methods to our inherited class here.
    public:
        void speak(){
            cout << "Woof Woof!" << endl;
        }
};

class Cat : public Animal{
    public:
        void mewo(){
            cout << "The cat goes meow" << endl;
        }
};


int main(){
    cout << "\033[2J\033[1;1H";
    Dog dog;
    Cat cat;
    cout << dog.alive << endl;
    dog.eat();
    dog.speak();
    cout << cat.alive << endl;
    cat.eat();
    cat.mewo();
    return 0;
}