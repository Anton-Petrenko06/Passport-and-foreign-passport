#include "ForeignPassport.h"

ForeignPassport::ForeignPassport()
{
    amountVisa = 0;
    arr = nullptr;
}

ForeignPassport::ForeignPassport(string _series, string _surname, string _name, Date _birth, string _placeOfBirth, Date _dateOfIssue, int _issuedBy)
{
    int a = 10000, b = 99999;
    series = _series;
    this->number = rand() % (a - b + 1) + b;
    surname = _surname;
    name = _name;
    birth = _birth;
    placeOfBirth = _placeOfBirth;
    dateOfIssue = _dateOfIssue;
    issuedBy = _issuedBy;
 
}

ForeignPassport::~ForeignPassport()
{
    if (amountVisa > 0) delete[] arr;
}

int ForeignPassport::getAmountVisa() const
{
    return amountVisa;
}

void ForeignPassport::addVisa(Visa visa)
{
    Visa* tmp = new Visa[++amountVisa];
    for (int i = 0; i < amountVisa - 1; i++)
    {
        tmp[i] = arr[i];
    }
    tmp[amountVisa - 1] = visa;
    if (arr != NULL) delete[] arr;
    arr = tmp;
    cout << "Виза успешо открыта!\n";
}

void ForeignPassport::cancelVisa(int number)
{
    Visa* tmp = new Visa[--amountVisa];
    for (int i = 0; i < amountVisa; i++)
    {
        if (i < number)
        {
            tmp[i] = arr[i];
        }
        else if (i >= number)
        {
            tmp[i] = arr[i + 1];
        }
    }
    if (arr != NULL) delete[] arr;
    arr = tmp;
    cout << "Виза успешо закрыта!\n";
}

void ForeignPassport::showInfo() const
{
    cout << "Серия: " << series << endl;
    cout << "Номер: " << number << endl;
    cout << "Фамилия: " << surname << endl;
    cout << "Имя: " << name << endl;
    cout << "Дата рождения: " << birth << endl;
    cout << "Место рождения: " << placeOfBirth << endl;
    cout << "Дата выдачи паспорта: " << dateOfIssue << endl;
    cout << "Кем выдан: " << issuedBy << endl;
    if (amountVisa == 0) {
        cout << "Выдано виз: 0\n";
    }
    else
    {
        cout << "Выдано виз: " << amountVisa << endl << endl;
        for (int i = 0; i < amountVisa; i++)
        {
            cout << "Виза #" << i + 1 << endl;
            arr[i].showInfo();
        }
    }
}
