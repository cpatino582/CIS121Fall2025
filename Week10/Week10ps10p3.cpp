#include <iostream>
#include <iomanip>
using namespace std;

void compute_mpg(float miles, float gallons, float& mpg)
{
	mpg = miles / gallons;
}

int main()
{
	string city;
	float miles, gallons, summiles, ncount, mpg;

	cout << "Enter the destination city, miles travelled, and gallons of gas used to get there. Enter Ctrl+z to stop" << endl;
	cin >> city >> miles >> gallons;

	summiles = 0;
	ncount = 0;

	while (!cin.eof())
	{
		compute_mpg(miles, gallons, mpg);

		summiles += miles;
		ncount += 1;

		cout << "The destination city is " << city << " and the miles per gallon is " << mpg << endl;

		cout << "Enter the destination city, miles travelled, and gallons of gas used to get there. Enter Ctrl+z to stop" << endl;
		cin >> city >> miles >> gallons;
	}

	cout << "The sum of miles travelled is " << summiles << " and the number of trips made is " << ncount << endl;

	return 0;
}