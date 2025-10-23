#include<iostream>
#include<iomanip>
using namespace std;

void compute_bataverage(float nhits, float nbats, float& bataverage)
{
	bataverage = nhits / nbats;
}

int main()
{
	string lname;
	float nhits, nbats, ncount, bataverage;

	cout << "Enter your last name, number of hits, and number of bats. Enter Ctrl+z to stop." << endl;
	cin >> lname >> nhits >> nbats;

	ncount = 0;

	while (!cin.eof())
	{
		compute_bataverage(nhits, nbats, bataverage);

		ncount += 1;

		cout << lname << " has a batting average of " << bataverage << endl;

		cout << "Enter your last name, number of hits, and number of bats. Enter Ctrl+z to stop." << endl;
		cin >> lname >> nhits >> nbats;
	}

	cout << "The number of entries entered is " << ncount << endl;

	return 0;

}