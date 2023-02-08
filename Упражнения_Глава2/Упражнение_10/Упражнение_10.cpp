#include <iostream>
using namespace std;

// Конвертор из старой денежной системы Великобритании в новую дясятичную.
int convertor(int funt, int shilling, int penc) {
	int funt1 = funt;
	int shilling1 = shilling;
	int penc1 = penc;
	float tmp1 = (shilling1 * 12 + penc1)/ 2.4; // Количество новых пенсов из старых пенсов.
	cout << "Десятичных фунтов = " << (char(74)) << funt1 << '.' << tmp1 << endl;
	return 0;
}


int main()
{
	setlocale(LC_ALL, "RU");
	int  funt;
	int shilling;
	int penc;
	cout << "Введите количесво фунтов: ";
	cin >> funt;
	cout << "Введите количесво шилингов: ";
	cin >> shilling;
	cout << "Введите количесво пенсов: ";
	cin >> penc;
	convertor(funt, shilling, penc);
	  
}
