#include<iostream>
using namespace std;
int main()
{
	double bookqty, costperbook, ordercost, shippingfee, totalcost;

	cout << "Enter the number of books to order ";
	cin >> bookqty;
	cout << "Enter the cost per book ";
	cin >> costperbook;

	ordercost = bookqty * costperbook;

	if (ordercost > 50.00)
	{
		shippingfee = 0;
	}
	else
	{
		shippingfee = 25.00;
	}

	totalcost = bookqty * costperbook + shippingfee;


	cout << "The total cost including shipping is " << totalcost << " with the shipping costing " << shippingfee << endl;

	return 0;

}