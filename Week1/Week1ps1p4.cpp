#include<iostream>
using namespace std;
int main()
{
	float num1, num2, num3, result;

	cout << "Enter the integers" << endl;
	cin >> num1 >> num2 >> num3;

	result = (num1 + num2) * num3;

	cout << "The result is " << result << endl;

	return 0;
}