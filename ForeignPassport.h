#pragma once
#include "Passport.h"
#include "Visa.h"
class ForeignPassport : public Passport
{
	Visa* arr;
	int amountVisa;
public:
	ForeignPassport();
	ForeignPassport(string _series, string _surname, string _name, Date _birth, string _placeOfBirth, Date _dateOfIssue, int _issuedBy);
	~ForeignPassport();
	int getAmountVisa()const;
	void addVisa(Visa visa);
	void cancelVisa(int number);
	void showInfo()const;
};

