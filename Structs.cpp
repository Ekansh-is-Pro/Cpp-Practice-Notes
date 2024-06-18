#include <iostream> 

using namespace std;

/*
Structs - A structure that groups related variables under one name 
          Structs can contain many different data types (string , int , char, etc)
          Variable in a struct are known as "members"
          Members can be access with '.' also known as the "Class members Access Operator"
*/

struct Students
{
    string name;
    double gpa;
    bool enrolled; //We can also set this a default value to be previously true so we don't have to repeat the declaration of that
};


int main(){
    
    Students student1;
    student1.name = "Ekansh";
    student1.gpa = 5.6;
    student1.enrolled = true;

    Students student2;
    student2.name = "Shreyansh";
    student2.gpa = 2.1;
    student2.enrolled = true;

    cout << "\033[2J\033[1;1H";

    cout << "Name of student is : " << student1.name << endl;
    cout << "GPA of student is : " << student1.gpa << endl;
    cout << "Student is enrolled : " << student1.enrolled << endl;
    cout << "Name of student is : " << student2.name << endl;
    cout << "GPA of student is : " << student2.gpa << endl;
    cout << "Student is enrolled : " << student2.enrolled << endl;
    
    return 0;
}