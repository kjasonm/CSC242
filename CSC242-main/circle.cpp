#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed

int main()
{
	double radius;
	cout << "Enter radius\n";
	//Add code to read user input and store in variable radius
	cin >> radius; 
	const double PI = 3.14159;
	double area;

	cout << "The area of a circle with radius " << radius ;
	//Calculate the area of the circle
	area = PI * pow(radius, 2);
	cout << " is " << area << ".";

	return 0;
}