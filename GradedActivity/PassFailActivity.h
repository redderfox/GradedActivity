#pragma once
#include "GradedActivity.h"

class PassFailActivity : public GradedActivity
{
protected:
	double minPassingScore;
public:
	PassFailActivity() : GradedActivity()
	{
		minPassingScore = 0.0;
	}

	PassFailActivity(double mps) : GradedActivity()
	{
		minPassingScore = mps;
	}

	void setMinPassingScore(double mps)
	{
		minPassingScore = mps;
	}

	double getMinPassingScore() const
	{
		return minPassingScore;
	}

	char getLetterGrade() const;
};