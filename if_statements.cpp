#include <iostream>

using namespace std;

int main(){
    int age;
    cout << "Enter you age : "<< endl;
    cin >> age;
    if (age < 18 &&  age > -1) {
        cout << "You are a minor." << endl;
    } 
    else if (age == -1){
        cout << "You did not enter your age. Please try again." << endl;
        cout<<"You are less than 18 bruh"<<endl;
    }
    else if(age <= 0){
        cout<<"I ain't a fool bruh"<<endl;
    }
    else if(age == 18){
        cout<<"You are ripe :D"<<endl;
    }
    else if(age > 18){
        cout<<"You are older than 18, but not too old yet."<<endl;
    }
    else{
        cout<<"Wut?"<<endl;
    }
    return 0;
}