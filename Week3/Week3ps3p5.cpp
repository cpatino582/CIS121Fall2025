#include<iostream>
using namespace std;
int main()
{
	double fixedcost, priceperunit, costperunit, breakeven;

	cout << "Enter your fixed cost";
	cin >> fixedcost;
	cout << "Enter your price per unit";
	cin >> priceperunit;
	cout << "Enter your cost per unit";
	cin >> costperunit;

	breakeven = (fixedcost) / (priceperunit - costperunit);


	cout << "The break even point is " << breakeven << endl;

	return 0;

}