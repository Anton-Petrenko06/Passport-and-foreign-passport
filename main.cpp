#include "Windows.h"
#include <ctime>
#include "Passport.h"
#include "Visa.h"
#include "ForeignPassport.h"
using namespace std;
int main() {
	srand(time(NULL));
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*Passport Ukraine("0067685345","��������","�����","������������",Date(2006,9,06),"���.��������� ������������������ ����� ������� ������� �������",Date(2020,10,01),5415,"���.��������� ������������������ ����� ������� ������� �������");
	Ukraine.showInfo();
	Passport A;
	A.showInfo();*/
	int b = 0;
	Visa A("������", Date(2022, 06, 20));
	Visa C("������", Date(2021, 07, 10));
	Visa X("�����", Date(2020, 02, 24));
	ForeignPassport B("0067685345", "��������", "�����", Date(2006, 9, 06), "���.��������� ������������������ ����� ������� ������� �������", Date(2020, 10, 01), 5415);
	B.showInfo();
	cout << "------------------------------------\n";
	B.addVisa(A);
	cout << "------------------------------------\n";
	B.addVisa(C);
	cout << "------------------------------------\n";
	B.showInfo();
	cout << "------------------------------------\n";
	cout << "������� ����� ���� ��� ��������:";
	cin >> b;
	--b;
	B.cancelVisa(b);
	cout << "------------------------------------\n";
	B.showInfo();
	cout << "------------------------------------\n";
	B.addVisa(X);
	cout << "------------------------------------\n";
	B.showInfo();
	return 0;
}