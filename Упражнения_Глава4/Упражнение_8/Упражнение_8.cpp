
#include <iostream>
using namespace std;

struct fraction {

	int numerator;
	int denominator;
};

int main()
{
	setlocale(0, "");
	char ch = '/';
	fraction fraction1, fraction2, result;
	cout << "Введите значение первой дроби числитель и знаменатель через '/': ";
	cin >> fraction1.numerator >> ch >> fraction1.denominator;
	cout << "Введите значение второй дроби числитель и знаменатель через '/': ";
	cin >> fraction2.numerator >> ch >> fraction2.denominator;
	result.numerator = (fraction1.numerator * fraction2.denominator + fraction2.numerator * fraction1.denominator);
	result.denominator = fraction1.denominator * fraction2.denominator;
	int integer_part;
	if ((result.numerator % result.denominator) == 0) {
		integer_part = result.numerator / result.denominator;
		cout << "Результат = " << integer_part << endl;
	}
	else
	{
		cout << "Результат = " << result.numerator << ch << result.denominator << endl;
	}








} 
