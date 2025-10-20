#include <iostream>
#include <iomanip>
using namespace std;

float compute_bataverage(float numbats, float numhits)
{
	float bataverage;
	bataverage = numbats / numhits;
	return bataverage;
}

int main()
{
	string lname;
	float numhits, numbats, numcount, bataverage;

	cout << "Enter your last name, number of hits, and number of bats." << endl;
	cin >> lname >> numhits >> numbats;

	numcount = 0;

	while (!cin.eof())
	{
		bataverage = compute_bataverage(numbats, numhits);

		numcount = numcount + 1;

		cout << lname << " has a batting average of " << bataverage << endl;

		cout << "Enter your last name, number of hits, and number of bats. Enter Ctrl+z to stop." << endl;
		cin >> lname >> numhits >> numbats;
	}

	cout << "The number of players entered is " << numcount << endl;

	return 0;
}