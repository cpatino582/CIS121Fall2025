#include<iostream>
using namespace std;

int main()
{
	string lname;
	double credits, tuitiontotal;

	cout << "Enter your last name ";
	cin >> lname;

	cout << "Enter your credits taken ";
	cin >> credits;

	tuitiontotal = credits * 250 + 100;

	cout << lname << " tuition total is " << tuitiontotal << endl;
	return 0;
}