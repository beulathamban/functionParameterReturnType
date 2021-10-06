// functionParametersReturnType.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;


//function prototypes
void MySum(float m,float n);
void MyDifference(float m, float n);
void MyProduct(float p, float q);
void Square(float side);
void Rectangle(float length, float breadth);

//float x, y; //global

int main()
{

	float x, y; //local scope means available only inside this main function
	cout << "\nEnter the value for x: ";
	cin >> x;
	cout << "\nEnter the value for y: ";
	cin >> y;

	MySum(x,y);//function call
	MyDifference(x, y);
	MyProduct(x, y);
	Square(x);
	Rectangle(x, y);
}

//function with dummy parameters /arguments
void MySum(float m, float n) {
	//adding two numbers

	cout << "\nThe sum of two numbers is: " << (m + n) << endl;
}

void MyDifference(float x,float y) {
	//subtracting a number 
	
	cout << "\nThe difference of two numbers is: " << (x-y) << endl;
}
void MyProduct(float p, float q) {
	//subtracting a number 

	cout << "\nThe product of two numbers is: " << (p * q) << endl;
}

void Square(float side) {
	cout << "\nThe area of square is: " << (side * side) << endl;
	cout << "\nThe perimeter of square is: " << (4 * side) << endl;
}

void Rectangle(float length, float breadth) {
	cout << "\nThe area of rectangle is: " << (length * breadth) << endl;
	cout << "\nThe perimeter of rectag=ngle is: " << (2 * (length + breadth)) << endl;
}