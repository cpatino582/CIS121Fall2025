#include<iostream>
using namespace std;
int main()
{
	string lname;
	double numdependent, grossincome, adjgrossincome, taxrate, incometax;

	cout << "Enter your last name ";
	cin >> lname;
	cout << "Enter the number of dependents ";
	cin >> numdependent;
	cout << "Enter your gross income ";
	cin >> grossincome;

	adjgrossincome = grossincome - (numdependent * 12000);

		if (adjgrossincome > 50000)
		{
			taxrate = 0.20;
		}
		else
		{
			taxrate = 0.10;
		}

		incometax = adjgrossincome * taxrate;

		if (incometax < 0)
		{
			incometax = 1000;
		}
		else
		{
		}


	cout << "Last name " << lname << " with a gross income of " << grossincome << " and number of dependents of " << numdependent << endl;

	cout << "Your adjusted gross income is " << adjgrossincome << " and income tax is " << incometax << endl;

	return 0;

}