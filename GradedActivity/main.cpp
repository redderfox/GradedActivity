#include <iostream>
#include <iomanip>
#include "FinalExam.h"
using namespace std;

int main()
{
	int questions;
	int missed;

	cout << "How many questions are on the final exam? ";
	cin >> questions;

	cout << "How many questions did the student miss? ";
	cin >> missed;

	FinalExam test(questions, missed);

	cout << setprecision(2) << fixed;
	cout << "\nEach question counts "
		<< test.getPointsEach() << " points.\n";
	cout << "The adjusted exam score is "
		<< test.getScore() << endl;
	cout << "The exam grade is "
		<< test.getLetterGrade() << endl;

	cin.ignore();
	cin.get();
	return 0;
}