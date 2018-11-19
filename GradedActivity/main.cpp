#include <iostream>
#include "GradedActivity.h"
using namespace std;

int main()
{
	double testScore;

	GradedActivity test;

	cout << "Enter your numeric test score: ";
	cin >> testScore;

	test.setScore(testScore);

	cout << "The grade for that test is " << test.getLetterGrade() << endl;

	cin.ignore();
	cin.get();
	return 0;
}