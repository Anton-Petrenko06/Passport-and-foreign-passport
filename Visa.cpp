#include "Visa.h"

Visa::Visa()
{
    nameOfCountry = "Великобритания";
    openingVisa = Date();
}

Visa::Visa(string _nameOfCountry, Date _openingVisa)
{
    nameOfCountry = _nameOfCountry;
    openingVisa = _openingVisa;
}

void Visa::setNameOfCountry(string _nameOfCountry)
{
    nameOfCountry = _nameOfCountry;
}

void Visa::setOpeningVisa(Date _openingVisa)
{
    openingVisa = _openingVisa;
}

string Visa::getNameOfCountry() const
{
    return nameOfCountry;
}

Date Visa::getOpeningVisa() const
{
    return openingVisa;
}

void Visa::showInfo() const
{
    cout << "Название страны: " << nameOfCountry << endl;
    cout << "Дата открытия визы: " << openingVisa << endl;
}
