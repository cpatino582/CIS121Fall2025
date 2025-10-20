#include<iostream>
using namespace std;
int main()
{
	double purchaseprice, currentprice, percentagechange;

	cout << "Enter the purchase price of the stock";
	cin >> purchaseprice;
	cout << "Enter the current price of the stock";
	cin >> currentprice;

	percentagechange = (currentprice - purchaseprice) / purchaseprice*100;


	cout << "The percentage change of the stock is " << percentagechange << "%" << endl;

	return 0;

}