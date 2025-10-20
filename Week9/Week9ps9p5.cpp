#include<iostream>
#include<iomanip>
using namespace std;

float compute_tuitionrate(char code)
{
	float tuitionrate;
	switch (code)
	{
	case 'I':
		tuitionrate = 250;
		break;
	case 'O':
		tuitionrate = 550;
		break;
	default:
		cout << "Incorrect district code" << endl;
		return 0;
	}
	return tuitionrate;
}

float compute_tuitioncost(float credithours, float tuitionrate)
{
	float tuitioncost;
	tuitioncost = credithours * tuitionrate;
	return tuitioncost;
}

int main()
{
	string lname;
	char code;
	float credithours, sumtuitioncost, tuitionrate, tuitioncost;

	cout << "Enter your last name, credit hours, and district code (I or O)." << endl;
	cin >> lname >> credithours >> code;

	sumtuitioncost = 0;

	while (!cin.eof())
	{
		tuitionrate = compute_tuitionrate(code);
		tuitioncost = compute_tuitioncost(credithours, tuitionrate);

		sumtuitioncost = sumtuitioncost + tuitioncost;

		cout << lname << " has a tuition cost of " << tuitioncost << endl;

		cout << "Enter your last name, credit hours, and district code (I or O). Enter Ctrl+z to stop." << endl;
		cin >> lname >> credithours >> code;
	}

	cout << "The sum of all tuition costs is " << sumtuitioncost << endl;

	return 0;
}