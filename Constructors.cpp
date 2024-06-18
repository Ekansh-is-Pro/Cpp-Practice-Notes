#include <iostream> 

using namespace std;

/*
Constructors - Special method that is automatically called when an object is instantiated(represent)
               useful for assigning values to the attributes as arguments.
               Basically using Constructors we don't need to manuaaly assign the values to a variable it'll do it for us automatically
               
*/

class Student{
    public:
        string name;
        double gpa;
        int age;
        //Generally we do have a constructor which can call behind the scenes.
        //But we can also do this explicitly too.

    Student(string student_name, double students_gpa, int student_age){
        //This will refer to the attributes we mentioned above and assign them the attribute.
        //We generally use this when the parameters name and attribute's name is the same
        /*
        this->name = student_name; 
        this->age = student_age;
        this->gpa = students_gpa;
        */
        //OR we can also do this
        name = student_name;
        age = student_age;
        gpa = students_gpa;
    }
        
};

int main(){
    cout << "\033[2J\033[1;1H";
    Student student1("Ekansh", 3.4 , 16);
    cout << student1.name << endl;
    cout << student1.age << endl;
    cout << student1.gpa << endl;
    return 0;
}