#pragma once

class GradedActivity
{
protected:
	char letter;
	double score;
	void determineGrade();
public:
	GradedActivity()
	{
		letter = ' ';
		score = 0.0;
	}

	void setScore(double s)
	{
		score = s;
		determineGrade();
	}

	double getScore() const
	{
		return score;
	}

	char getLetterGrade() const
	{
		return letter;
	}
};