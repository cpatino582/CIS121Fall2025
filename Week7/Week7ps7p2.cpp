#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float numhits, numbats, bataverage, entrycounts;
	string lname;

	entrycounts = 0;

	cout << "Enter your last name, number of hits, and bats in that order" << endl;
	cin >> lname >> numhits >> numbats;

	while (!cin.eof())
	{
		bataverage = numhits / numbats;
		entrycounts = entrycounts + 1;

		cout << lname << " has a batting average of " << bataverage << endl;

		cout << "Enter the next player's last name, number of hits, and bats in that order. Press Ctrl+z to stop" << endl;
		cin >> lname >> numhits >> numbats;
	}
	cout << "The total number of entries is " << entrycounts << endl;

	return 0;
}