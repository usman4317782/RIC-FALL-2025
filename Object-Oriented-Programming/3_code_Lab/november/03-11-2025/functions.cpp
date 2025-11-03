#include <iostream>

using namespace std;

int CalculateSum(int a, int b) {
    return a + b; //5+10=15
}


int main(){

    
    int firstNumber, secondNumber, result;
//call by value 
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;

    result = CalculateSum(firstNumber, secondNumber);// function call

    cout << "The sum is: " << result << endl;

    return 0;
}