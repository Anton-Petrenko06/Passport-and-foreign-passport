#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
class Visa
{
protected:
	string nameOfCountry;
	Date openingVisa;
public:
	Visa();
	Visa(string _nameOfCountry, Date _openingVisa);
	void setNameOfCountry(string _nameOfCountry);
	void setOpeningVisa(Date _openingVisa);
	string getNameOfCountry()const;
	Date getOpeningVisa()const;
	void showInfo()const;
};

