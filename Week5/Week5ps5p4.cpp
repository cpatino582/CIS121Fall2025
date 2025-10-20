#include <iostream>
using namespace std;

int main()
{
	double salary, taxrate, taxowed;
	cout << "Enter your annual salary";
	cin >> salary;

	if (salary > 100000)
	{
		taxrate = .40;
		taxowed = salary * taxrate;
	}
	else if (salary <= 100000 && salary >= 50000)
	{
		taxrate = .35;
		taxowed = salary * taxrate;
	}
	else
	{
		taxrate = .35;
		taxowed = salary * taxrate;
	}
	cout << "Your salary is " << salary << ". Your tax rate is " << taxrate << " and tax amount is " << taxowed << endl;
	return 0;
}