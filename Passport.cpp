#include "Passport.h"

Passport::Passport()
{
    int a = 10000, b = 99999;
    this->series = "002354637";
    this->number = rand() % (a - b + 1) + b;
    this->surname = "������";
    this->name = "����";
    this->middleName = "��������";
    this->birth = Date();
    this->placeOfBirth = "�������,����";
    this->dateOfIssue = Date()+ 5114;//����� 14 ��� ����� ��������
    this->issuedBy = 6513;
    this->registration="�������,����";
}

Passport::Passport(string _series, string _surname, string _name, string _middleName, Date _birth, string _placeOfBirth, Date _dateOfIssue, int _issuedBy, string _registration)
{
    int a = 10000, b = 99999;
    series = _series;
    this->number = rand() % (a - b + 1) + b;
    surname = _surname;
    name = _name;
    middleName = _middleName;
    birth = _birth;
    placeOfBirth = _placeOfBirth;
    dateOfIssue = _dateOfIssue;
    issuedBy = _issuedBy;
    registration = _registration;
}

void Passport::setSeries(string _series)
{
    series = _series;
}

void Passport::setSurname(string _surname)
{
    surname = _surname;
}

void Passport::setName(string _name)
{
    name = _name;
}

void Passport::setBirht(Date _birth)
{
    birth = _birth;
}

void Passport::setPlaceOfBirth(string _placeOfBirth)
{
    placeOfBirth = _placeOfBirth;
}

void Passport::setDateOfIssue(Date _dateOfIssue)
{
    dateOfIssue = _dateOfIssue;
}

void Passport::setIssuedBy(int _issuedBy)
{
    issuedBy = _issuedBy;
}

int Passport::getIssuedBy() const
{
    return issuedBy;
}

Date Passport::getDateOfIssue() const
{
    return dateOfIssue;
}

string Passport::getPlaceOfBirth() const
{
    return placeOfBirth;
}

Date Passport::getBirht() const
{
    return birth;
}

string Passport::getName() const
{
    return name;
}

string Passport::getSurname() const
{
    return surname;
}

int Passport::getNumber() const
{
    return number;
}

string Passport::getSeries() const
{
    return series;
}

void Passport::showInfo() const
{
    cout << "�����: " << series << endl;
    cout << "�����: " << number << endl;
    cout << "�������: " << surname << endl;
    cout << "���: " << name << endl;
    cout << "��������: " << middleName << endl;
    cout << "���� ��������: " << birth << endl;
    cout << "����� ��������: " << placeOfBirth << endl;
    cout << "���� ������ ��������: " <<dateOfIssue << endl;
    cout << "��� �����: " <<issuedBy << endl;
    cout << "��������: " <<registration << endl;
}
