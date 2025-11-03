#include <iostream>

using namespace std;

//define class
//attributes and methods
//resolution operator(::) to define methods outside the class

class Rectangle {
    public:
        int length;
        int width;
        void displayArea(); // Function declaration only
//         void displayArea(){
//     int area = length * width;
//     std::cout << "The area is: " << area << std::endl;
// }
};
void Rectangle::displayArea(int length, int width) {
    int area = length * width;
    std::cout << "The area is: " << area << std::endl;
}

int main()

{

    //call by value
    // ClassName ObjName;
    // objName.attribute1 = value1;
    // objName.attribute2 = value2;
    Person p1;// create object of class person
    p1.name = "John";//accessing attributes using dot operator
    return 0;
}

