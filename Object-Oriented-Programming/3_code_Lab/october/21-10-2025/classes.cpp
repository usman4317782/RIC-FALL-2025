#include <iostream>
using namespace std;

class Employee
{

    //how to create variables in c++ using oop
    public:
    int age;
    float salary;

    public:
    void Show()
    {
        cout << "calling show function ";
    }
};

int main(){
    Employee emp1;
    emp1.age = 25;
    emp1.salary = 45000.50; 
    emp1.Show();
    return 0;
}