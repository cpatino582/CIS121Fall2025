#include <iostream>
#include <iomanip>
using namespace std;

void compute_prices(float qty, float price, float& extprice, float& discount, float& discountprice)
{
	extprice = qty * price;
	if (qty > 1000)
	{
		discount = extprice * .1;
		discountprice = extprice - discount;
	}
	else
	{
		discount = 0;
		discountprice = extprice;
	}
}

int main()
{
	float qty, price, extprice, discount, discountprice, sumdiscountprice;

	cout << "Enter the quantity and price. Enter Ctrl+z to stop." << endl;
	cin >> qty >> price;

	sumdiscountprice = 0;

	while (!cin.eof())
	{
		compute_prices(qty, price, extprice, discount, discountprice);

		sumdiscountprice += discountprice;

		cout << "The quantity is " << qty << ", price is " << price << ", and extended price is " << extprice << ". The amount discounted is " << discount << " and the discounted price is " << discountprice << endl;

		cout << "Enter the quantity and price. Enter Ctrl+z to stop." << endl;
		cin >> qty >> price;
	}

	cout << "The total price of all entries with discount is " << sumdiscountprice << endl;

	return 0;
}