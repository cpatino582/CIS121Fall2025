#include<iostream>
using namespace std;
int main()
{
	double score1, score2, totalscore, wscore1, wscore2;

	cout << "Enter your score for exam 1";
	cin >> score1;
	cout << "Enter your score for exam 2";
	cin >> score2;

	wscore1 = score1 * .60;
	wscore2 = score2 * .40;
	totalscore = wscore1 + wscore2;

	cout << "Your total score is " << totalscore << endl;

	return 0;

}