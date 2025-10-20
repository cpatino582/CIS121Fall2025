#include <iostream>
using namespace std;

int main()
{
	string lname;
	double hrs, prate, total;
	char jcode;
	cout << "Enter your last name";
	cin >> lname;
	cout << "Enter your hours worked";
	cin >> hrs;
	cout << "Enter your job code with a capital letter of E, J, or A";
	cin >> jcode;

	if (jcode == 'E')
	{
		prate = 25.00;
		total = hrs * prate;
	}
	else if (jcode == 'J')
	{
		prate = 20.00;
		total = hrs * prate;
	}
	else if (jcode == 'A')
	{
		prate = 15.00;
		total = hrs * prate;
	}
	else
	{
		cout << "Please enter a correct job code";
		return 0;
	}
	cout <<lname<< " has worked " << hrs << " hours with a pay rate of " << prate << " for a total earned of " << total << endl;
	return 0;
}