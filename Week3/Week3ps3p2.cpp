#include<iostream>
using namespace std;
int main()
{
	double stockprice, stockqty, stockvalue;

	cout << "Enter the current stock price";
	cin >> stockprice;
	cout << "Enter the quantity of stock you have";
	cin >> stockqty;

	stockvalue = stockprice * stockqty;

	cout << "The current value of the stock in your portfolio is " << stockvalue << endl;

	return 0;

}