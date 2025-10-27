#include <iostream>
using namespace std;


int main()
{
	//	variable declaration and initialization
	/*
		1. don't use any reserved / keyword of the prog. lang
		2. don't use any special character
		3. don't use spaces b/w long variable name i.e userName
	*/
	int number = 155; // 4 bytes
	float points = 15.58; // 4 bytes
	double distance = 158.58; // 8 bytes
	char grade = 'A';
	//printf
//	cout <<	"First program in c++";

	int userAge;
	
	cout << "Enter your age: ";
	cin  >>  userAge;
	
	cout << "User Enter: " << userAge;
	
	
	return 0;
}