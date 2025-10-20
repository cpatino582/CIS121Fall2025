#include<iostream>

#include<iomanip>

using namespace std;

int main()

{

	double qty, price, extprice, discount, discountprice, totalprice, totaldiscounts;



	cout << "Enter the Quantity and Price in that order" << endl;

	cin >> qty >> price;



	totalprice = 0;



	while (!cin.eof())

	{

		extprice = qty * price;



		cout << setprecision(2) << fixed;



		if (qty > 1000)

		{

			discount = extprice * .1;

			discountprice = extprice - discount;

		}

		else

		{

			discount = 0;

			discountprice = extprice;

		}



		totalprice = totalprice + discountprice;



		cout << "The quantity is " << qty << ", price is " << price << ", extended price is " << extprice << ", discount amount is " << discount << ", and price after discount is " << discountprice << endl;

		cout << "Enter the next quantity and price in that order. Press ctrl+z to stop" << endl;

		cin >> qty >> price;

	}

	cout << "The total price after all the discounts is " << totalprice << endl;



	return 0;

}