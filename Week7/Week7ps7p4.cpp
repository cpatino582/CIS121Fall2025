#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double hours, entrycount, sumpay, overtimehours, pay, payrate, averagepay;
	string lname;
	char jobcode;

	cout << "Enter your last name, job code (L, A, or J), and hours in that order" << endl;
	cin >> lname >> jobcode >> hours;

	entrycount = 0;
	sumpay = 0;

	while (!cin.eof())
	{
		switch (jobcode)
		{
		case 'L':
			payrate = 25;
			break;
		case 'A':
			payrate = 30;
			break;
		case 'J':
			payrate = 50;
			break;
		default:
			cout << "Entered incorrect jobcode" << endl;
		}


		if (hours > 40)
		{
			overtimehours = hours - 40;
			pay = (payrate * 40) + (payrate * 1.5 * overtimehours);
		}
		else
		{
			pay = payrate * hours;
		}

		entrycount = entrycount + 1;
		sumpay = sumpay + pay;

		cout << lname << " with job code " << jobcode << " and worked " << hours << " hours has a pay of " << pay << endl;
		cout << "Enter your last name, job code (L, A, or J), and hours in that order. Press ctrl+z to stop" << endl;
		cin >> lname >> jobcode >> hours;
	}

	averagepay = sumpay / entrycount;

	cout << "The average pay is " << averagepay << " with " << entrycount << " entries" << endl;

	return 0;
}
