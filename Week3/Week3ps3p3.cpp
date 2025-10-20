#include<iostream>
using namespace std;
int main()
{
	double mealcost, tipcost, mealtotal;

	cout << "Enter the cost of the meal";
	cin >> mealcost;

	tipcost = mealcost * .15;
	mealtotal = mealcost + tipcost;

	cout << "The meal cost is " << mealcost << ", the tip is " << tipcost << ", and the grand total is " << mealtotal << endl;

	return 0;

}