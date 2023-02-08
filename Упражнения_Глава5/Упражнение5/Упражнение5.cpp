

#include <iostream>
using namespace std;

struct Time1
{
	int hours;
	int minuts;
	int seconds;
};
long hms_to_sec(Time1);
int main()
{
 
	setlocale(0, "");
	char user = 'a';
	char ch = '.';
	Time1 timeu;
	while (user  != 'n') {
		cout << "Введите время(hh.mm.ss) ";
		cin >> timeu.hours >> ch >> timeu.minuts >> ch >> timeu.seconds;
		cout << "Общее время = " << hms_to_sec(timeu) << " секунд" << endl;
		cout << "Хотите продолжить введите 'y', если нет введите 'n' ";
		cin >> user; 
	}





}

long hms_to_sec(Time1 timeu) {
	long total = timeu.hours * 3600 + timeu.minuts * 60 + timeu.seconds;
	return total;
	
}