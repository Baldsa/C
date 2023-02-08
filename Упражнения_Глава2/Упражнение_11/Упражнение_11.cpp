#include <iostream>
#include <iomanip>
using namespace std;


// Упражнение на манипулятора setiosflags(ios::left)
int main()

{
	setlocale(LC_ALL, "RU");
	cout << setw(10) << setiosflags(ios::left) << "Фамилимя"
		<< setw(10) << setiosflags(ios::left) << "Имя"
		<< setw(17) << setiosflags(ios::left) << "Адрес"
		<< setw(17) << setiosflags(ios::left) << "Город" << endl <<
		"____________________________________________________"
		<< endl
		<< setw(10) << setiosflags(ios::left) << "Петров"
		<< setw(10) << setiosflags(ios::left) << "Василий"
		<< setw(17) << setiosflags(ios::left) << "Кленовая 16"
		<< setw(10) << setiosflags(ios::left) << "Санкт-Петербург" << endl 
		<< setw(10) << setiosflags(ios::left) << "Иванов"
		<< setw(10) << setiosflags(ios::left) << "Сергей"
		<< setw(17) << setiosflags(ios::left) << "Осиновая 3"
		<< setw(10) << setiosflags(ios::left) << "Находка" << endl
		<< setw(10) << setiosflags(ios::left) << "Сидоров"
		<< setw(10) << setiosflags(ios::left) << "Иван"
		<< setw(17) << setiosflags(ios::left) << "Березовая 32"
		<< setw(10) << setiosflags(ios::left) << "Калининград" <<
		
		
		
		endl;


		
}

