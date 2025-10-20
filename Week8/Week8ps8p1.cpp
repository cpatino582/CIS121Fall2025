#include<iostream>
#include<iomanip>
using namespace std;

float compute_mpg(float miles, float gasgallons)
{
	float mpg;
	mpg = miles / gasgallons;
	return mpg;
}

int main()
{
	string city;
	float miles, gasgallons, mpg, summiles, tripcount;

	cout << "Enter the destination city, miles travelled, and gallons of gas used in that order." << endl;
	cin >> city >> miles >> gasgallons;

	summiles = 0;
	tripcount = 0;

	while (!cin.eof())
	{
		mpg = compute_mpg(miles, gasgallons);
		summiles = summiles + miles;
		tripcount = tripcount + 1;

		cout << "The destination city is " << city << " and miles per gallon is " << mpg << endl;

		cout << "Enter the destination city, miles travelled, and gallons of gas used in that order. Enter Ctrl+z to stop." << endl;
		cin >> city >> miles >> gasgallons;
	}

	cout << "The sum of miles travelled is " << summiles << " and number of trips made is " << tripcount << endl;

	return 0;
}