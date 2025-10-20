#include <iostream>
using namespace std;

int main()
{
	double partnum, partqty, costperunit, totalcost;
	
	cout << "Enter the part number" << endl;
	cin >> partnum;
	cout << "Enter the quantity" << endl;
	cin >> partqty;

	if (partnum == 10 && partqty > 1000)
	{
		costperunit = 1.00;
	}
	else if (partnum == 99 && partqty > 500)
	{
		costperunit = 2.00;
	}
	else
	{
		costperunit = 5.00;
	}
	totalcost = partqty * costperunit;

	cout << "The part number is " << partnum << ", the cost per unit is, " << costperunit << ", and the total is " << totalcost << endl;
	return 0;
}