// factor.cpp
// подсчет факториала числа с помощью цикла for
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	unsigned int numb = 1;
	unsigned long fact = 1;
	       // тип long дл¤ результата
	while (numb != 0) {
		cout << "Введите целое число: ";
		cin >> numb;                  // ввод числа
		for (int j = numb; j > 0; j--)     // умножение 1 на
			fact *= j;                    // numb, numb-1, ..., 2, 1
		cout << "Факториал числа равен " << fact << endl;
		
		
	}
	
}


