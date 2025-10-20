#include<iostream>
using namespace std;

int main()
{
	double itemprice, discountpercent, amountdiscounted, discountprice;

	cout << "Enter the item price ";
	cin >> itemprice;

	cout << "Enter the discount percent in decimal form ";
	cin >> discountpercent;

	amountdiscounted = itemprice * discountpercent;
	discountprice = itemprice - amountdiscounted;

	cout << "The amount discounted is " << amountdiscounted << " and the discounted price of the item is " << discountprice << endl;
	return 0;
}