#include <iostream>
using namespace std;

int main()
{
	string lname;
	float score;
	char lettergrade;
	cout << "Please enter your last name" << endl;
	cin >> lname;
	cout << "Please enter your score" << endl;
	cin >> score;

	if(score>=90)
	{
		lettergrade = 'A';
	}
	else if(score < 90 && score >= 80)
	{
		lettergrade = 'B';
	}
	else if(score < 80 && score >= 70)
	{
		lettergrade = 'C';
	}
	else if(score < 70 && score >= 60)
	{
		lettergrade = 'D';
	}
	else
	{
		lettergrade = 'F';
	}
	cout << lname << " got a grade of letter " << lettergrade << endl;
	return 0;
}
