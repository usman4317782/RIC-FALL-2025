#include <iostream>
using namespace std;

enum Grade {
A = 90,
B = 80,
C = 70,
D = 60,
F = 0
};

struct StudentRecord {
string name;
Grade currentGrade;
};

int main()
{
    StudentRecord student1;
    student1.name = "Emma";
    student1.currentGrade = A; // Clear and meaningful!

    return 0;
}