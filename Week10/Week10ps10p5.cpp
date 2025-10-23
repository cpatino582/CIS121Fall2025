#include <iostream>
#include <iomanip>
using namespace std;

void compute_tuition(float credithours, char code, float& tuition)
{
	float creditrate;

	switch (code)
	{
	case 'I':
		creditrate = 250;
		break;
	case'O':
		creditrate = 550;
		break;
	default:
		cout << "Incorrect code." << endl;
		break;
	}
	tuition = credithours * creditrate;
}

int main()
{
	string lname;
	char code;
	float credithours, sumtuition, sumcredithours, ncount, tuition;

	cout << "Enter your last name, credit hours, and district code (I or O). Enter Ctrl+z to stop." << endl;
	cin >> lname >> credithours >> code;

	sumtuition = 0;
	sumcredithours = 0;
	ncount = 0;

	while (!cin.eof())
	{
		compute_tuition(credithours, code, tuition);
		sumtuition += tuition;
		sumcredithours += credithours;
		ncount += 1;

		cout << lname << " and their tuition cost is " << tuition << endl;

		cout << "Enter your last name, credit hours, and district code (I or O). Enter Ctrl+z to stop." << endl;
		cin >> lname >> credithours >> code;
	}

	cout << "The total tuition is " << sumtuition << ", total credit hours taken is " << sumcredithours << ", and number of students is " << ncount << endl;

	return 0;
}