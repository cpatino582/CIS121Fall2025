#include<iostream>
using namespace std;
int main()
{
	float num1, num2, sum, product, difference;

	cout << "Enter 2 real numbers" << endl;
	cin >> num1 >> num2;

	sum = num1 + num2;
	product = num1 * num2;
	difference = num1 - num2;

	cout << "The sum is " << sum << " , product is " << product << ", and the difference is " << difference << endl;
	
	return 0;
}