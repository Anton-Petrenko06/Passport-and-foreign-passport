#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
class Passport
{
	string middleName;
	string registration;
protected:
	string series;
	int number;
	string surname;
	string name;
	Date birth;
	string placeOfBirth;
	Date dateOfIssue;
	int issuedBy;
public:
	Passport();
	Passport(string _series, string _surname, string _name, string _middleName, Date _birth, string _placeOfBirth, Date _dateOfIssue,int _issuedBy, string _registration);
	void setSeries(string _series);
	void setSurname(string _surname);
	void setName(string _name);
	//void setMiddleName(string _middleName);
	void setBirht(Date _birth);
	void setPlaceOfBirth(string _placeOfBirth);
	void setDateOfIssue(Date _dateOfIssue);
	void setIssuedBy(int _issuedBy);
	//void setRegistration(string _registration);
	//string getRegistration()const;
	int getIssuedBy()const;
	Date getDateOfIssue()const;
	string getPlaceOfBirth()const;
	Date getBirht()const;
	//string getMiddleName()const;
	string getName()const;
	string getSurname()const;
	int getNumber()const;
	string getSeries()const;
	void showInfo()const;

};

