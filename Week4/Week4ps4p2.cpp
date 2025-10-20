#include<iostream>
using namespace std;
int main()
{

	char item;
	double itemqty, unitprice, extprice;

	cout << "Choose the item between A or B (capitalized) ";
	cin >> item;
	cout << "Enter the quantity of the item ";
	cin >> itemqty;

	if (item == 'A')
	{
		unitprice = 10.00;
	}
	else
	{
		unitprice = 20.00;
	}
	extprice = itemqty * unitprice;


	cout << "The item " << item << " has a unit price of " << unitprice << " and an extended price of " << extprice << endl;

	return 0;

}