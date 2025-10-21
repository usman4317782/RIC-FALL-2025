#include <iostream>
using namespace std;

// user define function
// built in function

void greetUser(){
    cout<<"Hello, User! Welcome to the program."<<endl;
}
void show(){
    cout<<"Hello, world."<<endl;
}

void displaySum(int a, int b){
    int sum = a + b;
    cout<<"Sum is: "<<sum<<endl;
}

int main(){
    greetUser();  //function invoke
    return 0;
}