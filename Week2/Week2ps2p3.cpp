#include<iostream>
using namespace std;

int main()
{
	double length, width, area, circumference;

	cout << "Enter the length of the rectangle ";
	cin >> length;

	cout << "Enter the width of the rectangle ";
	cin >> width;

	area = length * width;
	circumference = (2 * length + 2 * width);

	cout << "The area is " << area << " and the circumference is " << circumference << endl;
	return 0;
}