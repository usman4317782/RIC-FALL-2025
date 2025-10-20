#include <iostream>
using namespace std;

struct Student 
{
    int id;
    string name;
    string fatherName;
    string motherName;
    int age;
    char gender;
    float gpa;
    string major;
};
// Notice

int main()
{

    Student usman;
    usman.id = 101; // Assign value to id
    usman.name = "Alice"; // Assign value to name
    usman.age = 300; // Assign value to salary
    return 0;
}