#include<iostream>
#include<iomanip>
using namespace std;

float compute_tuition(float credits)
{
	float tuition;
	tuition = credits * 250;
	return tuition;
}

int main()
{
	string lname;
	float credits, tuition, sumtuition, numcount;

	cout << "Enter your last name and credits taken in that order" << endl;
	cin >> lname >> credits;

	sumtuition = 0;
	numcount = 0;

	while (!cin.eof())
	{
		tuition = compute_tuition(credits);

		sumtuition = sumtuition + tuition;
		numcount = numcount + 1;

		cout << lname << " with " << credits << " credits taken will have a tuition owed of " << tuition << endl;

		cout << "Enter your last name and credits taken in that order. Enter Ctrl+z to stop" << endl;
		cin >> lname >> credits;
	}

	cout << "The sum tuition is " << sumtuition << " with the number of entries being " << numcount << endl;

	return 0;
}