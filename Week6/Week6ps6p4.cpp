#include <iostream>
using namespace std;

int main()
{
	char equipcode, daycode;
	float cost;

	cout << "Enter the equipment code of the rental capitalized " << endl;
	cin >> equipcode;
	cout << "Enter the code indicating half day (H) or full day (F) capitalized " << endl;
	cin >> daycode;

	if (equipcode == 'A' && daycode == 'F')
	{
		cost = 10.00;
	}
	else if (equipcode == 'A' && daycode == 'H')
	{
		cost = 15.00;
	}
	else if (equipcode == 'B' && daycode == 'F')
	{
		cost = 20.00;
	}
	else if (equipcode == 'B' && daycode == 'H')
	{
		cost = 35.00;
	}
	else if (equipcode == 'C' && daycode == 'H')
	{
		cost = 40.00;
	}
	else if (equipcode == 'C' && daycode == 'F')
	{
		cost = 45.00;
	}
	else
	{
		cost = 50.00;
	}

	cout << "The cost is " << cost << endl;

	return 0;
}