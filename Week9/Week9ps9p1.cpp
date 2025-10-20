#include<iostream>
#include<iomanip>
using namespace std;

float compute_total(float qty, float price)
{
	float total;
	total = qty * price;
	return total;
}

float compute_discounttotal(float total)
{
	float discounttotal, discount;
	if (total > 10000)
	{
		discount = total * .1;
	}
	else
	{
		discount = total * .05;
	}
	discounttotal = total - discount;
	return discounttotal;
}

int main()
{
	float qty, price, sumtotal, sumdiscounttotal, total, discounttotal;

	cout << "Enter a quantity and price" << endl;
	cin >> qty >> price;

	sumtotal = 0;
	sumdiscounttotal = 0;

	while (!cin.eof())
	{
		total = compute_total(qty, price);
		discounttotal = compute_discounttotal(total);

		sumtotal = sumtotal + total;
		sumdiscounttotal = sumdiscounttotal + discounttotal;

		cout << "The total is " << total << " and the discounted total is " << discounttotal << endl;

		cout << "Enter a quantity and price. Enter Ctrl+z to stop" << endl;
		cin >> qty >> price;
	}

	cout << "The sum total is " << sumtotal << " and the sum of discounted total is " << sumdiscounttotal << endl;

	return 0;
}