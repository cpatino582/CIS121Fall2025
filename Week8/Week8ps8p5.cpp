#include<iostream>
#include<iomanip>
using namespace std;

float compute_fee(char code)
{
	float fee;
	switch (code)
	{
	case 101:
		fee = 50;
		break;
	case 121 :
		fee = 100;
		break;
	case 111:
		fee = 25;
		break;
	case 112:
		fee = 35;
		break;
	case 100:
		fee = 55;
		break;
	default:
		fee = 50;
	}
	return fee;
}

int main()
{
	string department;
	float code;
	float sumfee, numcount, fee, averagefee;

	cout << "Enter the department and course code" << endl;
	cin >> department >> code;

	sumfee = 0;
	numcount = 0;

	while (!cin.eof())
	{
		fee = compute_fee(code);

		sumfee = sumfee + fee;
		numcount = numcount + 1;

		cout << "The department is " << department << ", course code is " << code << ", and the lab fee is " << fee << endl;

		cout << "Enter the department and course code. Enter Ctrl+z to stop." << endl;
		cin >> department >> code;
	}

	averagefee = sumfee / numcount;

	cout << "The total of all lab fees is " << sumfee << " and the average fee is " << averagefee << endl;

	return 0;
}