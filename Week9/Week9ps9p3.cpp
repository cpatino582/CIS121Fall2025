#include <iostream>
#include <iomanip>
using namespace std;

float compute_mpg(float miles, float gallons)
{
	float mpg;
	mpg = miles / gallons;
	return mpg;
}

float compute_gascost(float gallons)
{
	float gascost;
	gascost = gallons * 3.5;
	return gascost;
}

int main()
{
	string city;
	float miles, gallons, sumgascost, mpg, gascost;

	cout << "Enter the destination city, miles travelled, and gallons used." << endl;
	cin >> city >> miles >> gallons;

	sumgascost = 0;

	while (!cin.eof())
	{
		mpg = compute_mpg(miles, gallons);
		gascost = compute_gascost(gallons);

		sumgascost = sumgascost + gascost;

		cout << "The destination city is " << city << ", miles per gallon is " << mpg << ", and cost of gas is " << gascost << endl;

		cout << "Enter the destination city, miles travelled, and gallons used. Enter Ctrl+z to stop." << endl;
		cin >> city >> miles >> gallons;
	}

	cout << "The sum of total gas cost is " << sumgascost << endl;

	return 0;
}