#include <iostream>
using namespace std;
#include <process.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "RU");
	char dir = 'a';
	int x, y;
	x = y = 10;
	while (dir != '\r') {
		cout << "\n\nВаши координаты: " << x << ',' << y << endl;
		if (x < 5 || x > 15) {
			cout << "\n\nОсторожно дарконы!! " << endl;
		}
		if (x % 7 == 0 && y % 7 == 0)
			cout << "Здесь находиться гриб!" << endl;
		cout << "Выберите ваше направление (n.s.e.w): ";
		dir = _getche();
		switch (dir)
		{
		
		case 'n': y--; break;
		case 's': y++; break;
		case 'e': x++; break;
		case 'w': x--; break;
		default:
			cout << "Неправильно введено значение направления!! " << endl; 
			break;
		}
	}
	return 0;

}

