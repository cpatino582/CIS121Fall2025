#include <iostream>
using namespace std;

int main()
{
	double widgetqty, price, extprice, tax, total;
	char status;

	cout << "Enter the quantity of widgets " << endl;
	cin >> widgetqty;
	cout << "Enter your customer status capitalized " << endl;
	cin >> status;

	switch (status)
	{
	case 'A':
		if (widgetqty > 10000)
		{
			price = 10;
		}
		else
		{
			cout << "The values you entered does not qualify for any pricing and orders." << endl;
			return 0;
		}
		break;
	case 'B':
		if (widgetqty > 10000)
		{
			price = 12;
		}
		else
		{
			cout << "The values you entered does not qualify for any pricing and orders." << endl;
			return 0;
		}
		break;
	case 'C':
		if (widgetqty >= 5000 && widgetqty <= 10000)
		{
			price = 20;
		}
		else
		{
			cout << "The values you entered does not qualify for any pricing and orders." << endl;
			return 0;
		}
		break;
	case 'D':
		if (widgetqty >= 5000 && widgetqty <= 10000)
		{
			price = 22;
		}
		else
		{
			cout << "The values you entered does not qualify for any pricing and orders. You have to meet the criterias" << endl;
			return 0;
		}
		break;
	default:
		if (widgetqty < 5000)
		{
			price = 30;
		}
		else
		{
			cout << "The values you entered does not qualify for any pricing and orders." << endl;
			return 0;
		}
		
	}

	extprice = widgetqty * price;
	tax = extprice * .07;
	total = extprice + tax;

	cout << "The extended price is " << extprice << ", tax is " << tax << ", and total is " << total << endl;
	return 0;
}