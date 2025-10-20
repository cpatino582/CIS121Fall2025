#include <iostream>
using namespace std;

int main()
{
	double lbs, rate, total;
	cout << "Enter the weight in lbs for the metal you are recycling ";
	cin >> lbs;

	if (lbs > 100)
	{
		rate = .5;
			total = lbs * rate;
	}
	else if (lbs <= 100 && lbs >= 30)
	{
		rate = .25;
			total = lbs * rate;
	}
	else if (lbs < 30 && lbs >= 20)
	{
		rate = .20;
			total = lbs * rate;
	}
	else
	{
		rate = .10;
			total = lbs * rate;
	}
	cout << "With the weight of " << lbs << " lbs, your rate is " << rate << " and total is " << total << endl;
}