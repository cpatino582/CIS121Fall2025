#include<iostream>
using namespace std;
int main()
{
	string name;
	double appliancecost, warrantycost, totalcost;

	cout << "Enter the name of the appliance ";
	cin >> name;
	cout << "Enter the cost of the appliance ";
	cin >> appliancecost;

	if (appliancecost > 1000)
	{
		warrantycost = appliancecost * 0.1;
	}
	else
	{
		warrantycost = appliancecost * 0.05;
	}

	totalcost = appliancecost + warrantycost;


	cout << "The appliance name " << name << " with the appliance costing " << appliancecost << ". The cost of warranty is " << warrantycost << " and the total cost with warranty is " << totalcost << endl;

	return 0;

}