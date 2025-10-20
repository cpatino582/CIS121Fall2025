#include <iostream>
#include <iomanip>
using namespace std;

float compute_payrate(char code)
{
	float payrate;
	switch (code)
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
		cout << "Incorrect job code." << endl;
		return 0;
	}
	return payrate;
}

float compute_grosspay(float hours, float payrate)
{
	float grosspay, overtimehours;
	if (hours > 40)
	{
		overtimehours = hours - 40;
		grosspay = (payrate * 40) + (payrate * 1.5 * overtimehours);
	}
	else
	{
		grosspay = payrate * hours;
	}
	return grosspay;
}

int main()
{
	string lname;
	char code;
	float hours, sumgrosspay, payrate, grosspay;

	cout << "Enter your last name, job code (L, A, or J), and hours worked." << endl;
	cin >> lname >> code >> hours;

	sumgrosspay = 0;

	while (!cin.eof())
	{
		payrate = compute_payrate(code);
		grosspay = compute_grosspay(hours, payrate);

		sumgrosspay = sumgrosspay + grosspay;

		cout << lname << " has a gross pay of " << grosspay << endl;

		cout << "Enter your last name, job code (L, A, or J), and hours worked. Enter Ctrl+z to stop." << endl;
		cin >> lname >> code >> hours;
	}

	cout << "The sum grosspay is " << sumgrosspay << endl;

	return 0;
}