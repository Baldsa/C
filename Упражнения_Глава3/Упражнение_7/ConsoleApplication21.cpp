#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	int capital;
	cout << "Введите начальный капитал: ";
	cin >> capital;
	int years;
	cout << "Введите количество лет: ";
	cin >> years;
	float procent;
	cout << "Введите процентную ставку : ";
	cin >> procent;
	procent = procent / 100;
	for (int i = 0; i != years; ++i) {
		capital += (capital * procent);
	}
	cout << "Через " << years << " лет(года) вы получите "
		<< capital << " долларов" << endl;



}
