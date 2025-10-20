#include<iostream>
using namespace std;
int main()
{
	double itemqty, unitprice, extprice, taxcost, totalcost;

	cout << "Enter the quantity of the item";
	cin >> itemqty;

	if (itemqty >= 1000)
	{
		unitprice = 3.00;
	}
	else
	{
		unitprice = 5.00;
	}

	extprice = itemqty * unitprice;
		taxcost = extprice * 0.07;
		totalcost = extprice + taxcost;


		cout << "The quantity is " << itemqty << ", unit price is " << unitprice << ", extended price is " << extprice << ", tax cost is " << taxcost << ", and total is " << totalcost << endl;

	return 0;

}