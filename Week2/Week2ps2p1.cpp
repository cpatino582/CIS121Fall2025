#include<iostream>
using namespace std;

int main()
{
	double qty, unitprice, totalprice;

	cout<<"Enter the quantity";
	cin>>qty;

	cout<<"Enter the unit price";
	cin>>unitprice;

	totalprice = qty * unitprice;

	cout << "The extended price is " << totalprice << endl;
	return 0;
}