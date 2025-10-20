#include <iostream>
using namespace std;

int main()
{
	char jobcode;
	double hours, payrate, grosssalary;

	cout << "Enter your job code capitalized " << endl;
	cin >> jobcode;
	cout << "Enter your hours " << endl;
	cin >> hours;

	if (jobcode == 'L' && hours > 40)
	{
		payrate = 50.00;
	}
	else if (jobcode == 'L')
	{
		payrate = 40.00;
	}
	else if (jobcode == 'J' && hours > 60)
	{
		payrate = 100.00;
	}
	else if (jobcode == 'J')
	{
		payrate = 75.00;
	}
	else if (jobcode == 'A' && hours > 40)
	{
		payrate = 25.00;
	}
	else if (jobcode == 'A')
	{
		payrate = 20.00;
	}
	else
	{
		cout << "You did not enter vailid job code and hours" << endl;
		return 0;
	}

	grosssalary = payrate * hours;

	cout << "Your gross salary is " << grosssalary << endl;
	
	return 0;
}