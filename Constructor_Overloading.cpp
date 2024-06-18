#include <iostream>

using namespace std;

/*
Overloading Constructors - Multiple Constructors with the same but different parameters
                           allows for varying arguments when instantiating an object.
*/

class Pizza{
    public:
        string topping1;
        string topping2;
    
    Pizza(string topping1){
        this->topping1 = topping1;
    }
    Pizza(string topping1, string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
    Pizza(){}
};

int main(){
    cout << "\033[2J\033[1;1H";

    Pizza pizza1("peproni");
    Pizza pizza2("Mushrooms", "Peppers");
    Pizza pizza3; // To handle such cases we have to manually define a constructor which takes no arguments or it will give this error.
    cout << pizza1.topping1 << endl;
    cout << pizza2.topping2 << endl;
    return 0;
}