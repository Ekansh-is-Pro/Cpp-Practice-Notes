#include <iostream>

using namespace std;

int main(){
    string name;
    cout << "Enter you name : "<<endl;
    getline(cin, name); // takes in all the spaces too.

    //Length Method : Gives the length of a string
    if(name.length() > 12){
        cout << "Your name can't be over 12 char" << endl;
    }
    else{
        cout << "Welcome "<<name<<endl;
    }

    //Empty : If the input of the value is empty will return a boolean value
    if(name.empty()){
        cout<<"You didn't enter anything"<<endl;
    }
    else{
        cout << "Hello " << name << '\n' << endl;
    }

    //Clear : This is used to clear the input values of the data stream.
    string surname = "Jaiswal";
    cout << "Your surname is " << surname << "\n" << endl;
    surname.clear();
    cout << "Now your new surname is : " << surname << endl;

    //Appending : You can add one string to another string using this method.

    string gmail_name = "ekanj2007";
    gmail_name.append("@gmail.com");
    cout << "Your Gmail address is : " << gmail_name << endl;

    //Returning a character at an given position of the string

    string bro = "Shreyansh";
    cout << bro.at(5) << endl;

    //Inserting a given character at an given index / position too.

    string bro_new = "Ekansh";
    bro_new.insert(0,"@");
    //     (index) (chracter input)
    cout << bro_new << endl;

    //Finding a certain character in a given string
    cout << bro_new.find('a') << '\n' << endl;

    //Erase : Erase a portion of our string
    string sentence = "This is a sentence";
    sentence.erase(0 /*Beginning Index (Not inclusive)*/ , 4 /*Ending Index*/);
    cout << sentence << endl;

    return 0;
}