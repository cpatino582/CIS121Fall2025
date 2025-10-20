#include<iostream>
using namespace std;

int main()
{
	string lname;
	double hrs, prate, grosspay;

	cout << "Enter your last name ";
	cin >> lname;

	cout << "Enter your hrs first then your pay rate ";
	cin >> hrs >> prate;

	grosspay =hrs*prate;

	cout << lname << " gross pay is " << grosspay << endl;
	return 0;
}