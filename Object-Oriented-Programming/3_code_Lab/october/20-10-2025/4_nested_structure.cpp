#include <iostream>
using namespace std;

struct Address {
string street;
string city;
string state;
int zipcode;
};
struct Student {
int rollNumber;
string name;
Address home; // Nested structure!
};
// struct Student{

// };

// enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{

// Declaring and initializing
Student s1;
Student s2;
    s1.rollNumber = 1001;
    s1.name = "John";
    s1.home.street = "123 Main St";
    s1.home.city = "Springfield";
    s1.home.state = "IL";
    s1.home.zipcode = 62701;
    
    s2.rollNumber = 1001;
    s2.name = "John";
    s2.home.street = "123 Main St";
    s2.home.city = "Springfield";
    s2.home.state = "IL";
    s2.home.zipcode = 62701;

    // cout << "This is a placeholder for the nested structure example." << endl;
    return 0;
}