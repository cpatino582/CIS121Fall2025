#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string city;
	float miles, gasgallons, totalmiles, tripcounts, mpg;

	cout << "Enter the destination city, miles travelled, and gallons of gasoline used" << endl;
	cin >> city >> miles >> gasgallons;

	totalmiles = 0;
	tripcounts = 0;

	while (!cin.eof())
	{
		totalmiles = totalmiles + miles;
		tripcounts = tripcounts + 1;
		mpg = miles / gasgallons;

		cout << "The destination city is " << city << " and the miles per gallon is " << mpg << endl;

		cout << "Enter the next destination city, miles travelled, and gallons of gasoline used. Enter to Ctrl+z to stop." << endl;
		cin >> city >> miles >> gasgallons;
	}

	cout <<"The sum of miles travelled is " << totalmiles << " and number of trips made is " << tripcounts << endl;

	return 0;
}