#include<iostream>
#include<iomanip>
using namespace std;

float compute_unitprice(char productcode)
{
	float unitprice;
	switch (productcode)
	{
	case 'W':
		unitprice = 10;
		break;
	case 'C':
		unitprice = 15;
		break;
	case 'G':
		unitprice = 20;
		break;
	default:
		cout << "Incorrect product code." << endl;
		return 0;
	}

	return unitprice;

}

float compute_shipping(char productcode)
{
	float shipping;
	switch (productcode)
	{
	case 'W':
		shipping = 2;
		break;
	case 'C':
		shipping = 5;
		break;
	default:
		shipping = 7;
	}

	return shipping;

}

int main()
{
	char productcode;
	float qty, sumtotal, numcount, unitprice, shipping, extprice, total;

	cout << "Enter the product code (W, C, or G) and quantity." << endl;
	cin >> productcode >> qty;

	sumtotal = 0;
	numcount = 0;

	while (!cin.eof())
	{
		unitprice = compute_unitprice(productcode);
		shipping = compute_shipping(productcode);

		extprice = qty * unitprice;
		total = extprice + shipping;

		sumtotal = sumtotal + total;
		numcount = numcount + 1;

		cout << "The product code " << productcode << " has a unit price of " << unitprice << " and a shipping cost of " << shipping << ". The extended price is " << extprice << " and total price is " << total << endl;

		cout << "Enter the product code (W, C, or G) and quantity. Enter Ctrl+z to stop." << endl;
		cin >> productcode >> qty;
	}

	cout << "The total of all entries is " << sumtotal << " and total number of entries is " << numcount << endl;

	return 0;
}