#include <iostream>
#include <iomanip>
using namespace std;

void compute_pay(char code, float hours, float& pay)
{
	float overtime;
	float payrate;

	switch (code)
	{
	case 'L':
		payrate = 25;
		break;
	case'A':
		payrate = 30;
		break;
	case 'J':
		payrate = 50;
		break;
	default:
		cout << "Incorrect code" << endl;
		payrate = 0;
		break;
	}

	if (hours > 40)
	{
		overtime = hours - 40;
		pay = (payrate * 40) + (payrate * 1.5 * overtime);
	}
	else
	{
		pay = payrate * hours;
	}
}

void compute_average(float sumpay, float ncount, float& averagepay)
{
	averagepay = sumpay / ncount;
}

int main()
{
	string lname;
	char code;
	float hours, sumpay, ncount, pay, averagepay;

	cout << "Enter your last name, job code (L, A, or J), and number of hours worked. Enter Ctrl+z to stop." << endl;
	cin >> lname >> code >> hours;

	sumpay = 0;
	ncount = 0;

	while (!cin.eof())
	{
		compute_pay(code, hours, pay);

		sumpay += pay;
		ncount += 1;

		cout << lname << " with job code of " << code << " and worked " << hours << " hours and has a pay of " << pay << endl;

		cout << "Enter your last name, job code (L, A, or J), and number of hours worked. Enter Ctrl+z to stop." << endl;
		cin >> lname >> code >> hours;
	}

	compute_average(sumpay, ncount, averagepay);

	cout << "The average pay is " << averagepay << " and number of entries made is " << ncount << endl;

	return 0;
}