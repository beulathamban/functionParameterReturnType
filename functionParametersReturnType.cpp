// functionParametersReturnType.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;


//function prototypes
float MySum(float m,float n);
float MyDifference(float m, float n);
float MyProduct(float p, float q);
void Square(float side);
void Rectangle(float length, float breadth);

//float x, y; //global

int main()
{
	float result;
	float x, y; //local scope means available only inside this main function
	cout << "\nEnter the value for x: ";
	cin >> x;
	cout << "\nEnter the value for y: ";
	cin >> y;

	result = MySum(x,y);//function call and receives the returned value
	cout << "\nAddition Result = "<<result <<endl;
	result = MyDifference(x, y);
	cout << "\nSubtraction Result = " << result << endl;
	result = MyProduct(x, y);
	cout << "\nMultiplication Result = " << result << endl;
	Square(x);
	//cout << "\nResult = " << result << endl;
	Rectangle(x, y);
	//cout << "\nResult = " << result << endl;

}

//function with dummy parameters /arguments
float MySum(float m, float n) {
	//adding two numbers

	return (m + n);
}

float MyDifference(float x, float y) {
	//subtracting a number 

	return(x - y);
}

float MyProduct(float p, float q) {
	//subtracting a number 

	return (p * q);
}

void Square(float side) {
	cout << "\nThe area of square is: " << (side * side) << endl;
	cout << "\nThe perimeter of square is: " << (4 * side) << endl;
}

void Rectangle(float length, float breadth) {
	cout << "\nThe area of rectangle is: " << (length * breadth) << endl;
	cout << "\nThe perimeter of rectag=ngle is: " << (2 * (length + breadth)) << endl;
}