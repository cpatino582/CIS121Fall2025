#include <iostream>
using namespace std;

int main()
{
	double lbs, priceperlbs, cost;
	cout << "Enter the weight of apples in lbs";
	cin >> lbs;
	if (lbs > 100)
	{
		priceperlbs = .10;
		cost = lbs * priceperlbs;
	}
	else if(lbs<=100 && lbs>=50)
	{
		priceperlbs = .25;
		cost = lbs * priceperlbs;
	}
	else
	{
		priceperlbs = .50;
		cost = lbs * priceperlbs;
	}
	cout << "The price per pound is " << priceperlbs << " and the total is " << cost << endl;
	return 0;
}