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
	/*Passport Ukraine("0067685345","Петренко","Антон","Владимирович",Date(2006,9,06),"пгт.Кириковка Велекописаривський район Сумська область Украина",Date(2020,10,01),5415,"пгт.Кириковка Велекописаривський район Сумська область Украина");
	Ukraine.showInfo();
	Passport A;
	A.showInfo();*/
	int b = 0;
	Visa A("Польша", Date(2022, 06, 20));
	Visa C("Турция", Date(2021, 07, 10));
	Visa X("Чехия", Date(2020, 02, 24));
	ForeignPassport B("0067685345", "Петренко", "Антон", Date(2006, 9, 06), "пгт.Кириковка Велекописаривський район Сумська область Украина", Date(2020, 10, 01), 5415);
	B.showInfo();
	cout << "------------------------------------\n";
	B.addVisa(A);
	cout << "------------------------------------\n";
	B.addVisa(C);
	cout << "------------------------------------\n";
	B.showInfo();
	cout << "------------------------------------\n";
	cout << "Введите номер визы для удаления:";
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