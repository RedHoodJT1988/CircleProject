#include "Circle.h"
#include <iostream>
#include <cmath>
using namespace std;

void printCircleData(const Circle& c);

int main()
{
	Circle circle1;
	Circle circle2(5);

	printCircleData(circle1);
	printCircleData(circle2);

	return 0;
}

void printCircleData(const Circle& c)
{
	cout << "Circle with radius " << c.getRadius() << endl;
	cout << "\tCircumference: " << c.circumference() << endl;
	cout << "\tArea: " << c.area() << endl;
	cout << endl;
}