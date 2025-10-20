#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string lname;
	char districtcode;
	float credithours, sumtuition, totalcredithours, numcount, creditrate, tuition;

	cout << "Enter your last name, credit hours, and district code (I or O) in that order" << endl;
	cin >> lname >> credithours >> districtcode;

	sumtuition = 0;
	totalcredithours = 0;
	numcount = 0;

	while (!cin.eof())
	{
		switch (districtcode)
		{
		case 'I':
			creditrate = 250;
			break;
		case 'O':
			creditrate = 550;
			break;
		default:
			cout << "You entered the incorrect district code" << endl;
			return 0;
		}

		tuition = credithours * creditrate;

		sumtuition = sumtuition + tuition;
		totalcredithours = totalcredithours + credithours;
		numcount = numcount + 1;

		cout << lname << " and their tuition owed is " << tuition << endl;

		cout << "Enter your last name, credit hours, and district code (I or O) in that order. Enter Ctrl+z to stop." << endl;
		cin >> lname >> credithours >> districtcode;
	}

	cout << "The total tuition is " << sumtuition << ", total credit hours taken is, " << totalcredithours << ", and number of students is " << numcount << endl;

	return 0;
}