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
    cout << "���� ������ �������!\n";
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
    cout << "���� ������ �������!\n";
}

void ForeignPassport::showInfo() const
{
    cout << "�����: " << series << endl;
    cout << "�����: " << number << endl;
    cout << "�������: " << surname << endl;
    cout << "���: " << name << endl;
    cout << "���� ��������: " << birth << endl;
    cout << "����� ��������: " << placeOfBirth << endl;
    cout << "���� ������ ��������: " << dateOfIssue << endl;
    cout << "��� �����: " << issuedBy << endl;
    if (amountVisa == 0) {
        cout << "������ ���: 0\n";
    }
    else
    {
        cout << "������ ���: " << amountVisa << endl << endl;
        for (int i = 0; i < amountVisa; i++)
        {
            cout << "���� #" << i + 1 << endl;
            arr[i].showInfo();
        }
    }
}
