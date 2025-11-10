#include <iostream>

using namespace std;

class Student
{
  //class constructor
    public:
        string name;
        int age;

        void displayInfo(string name, int age)
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
    
    
        
};


int main()
{

    // cout << "Hello, World!" << endl;

    Student student1; //object of the class

    // student1.name = "Alice";
    // student1.age = 20;

    cout << "Enter Student Name: ";
    cin >> student1.name;
    cout << "Enter Student Age: ";
    cin >> student1.age;


    // student1.displayInfo(student1.name, student1.age);
    return 0;
}