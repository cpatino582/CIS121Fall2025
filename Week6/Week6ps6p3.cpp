#include <iostream>
using namespace std;

int main()
{
	double ticketqty, priceperticket, totalcost;
	char locationcode;

	cout << "Enter the number of concert tickets " << endl;
	cin >> ticketqty;
	cout << "Enter the location code capitalized " << endl;
	cin >> locationcode;

	if (ticketqty >= 25 || locationcode == 'H')
	{
		priceperticket = 30.00;
	}
	else if (ticketqty >= 10 || locationcode == 'L')
	{
		priceperticket = 40.00;
	}
	else
	{
		priceperticket = 50.00;
	}

	totalcost = ticketqty * priceperticket;

	cout << "The ticket quantity is " << ticketqty << ", the price per ticket is " << priceperticket << ", and the total cost is " << totalcost << endl;

	return 0;
}