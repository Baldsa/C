#include <iostream>
using namespace std;


const int SIZE = 100; 

class Distance {

private: 
	int feet; 
	float inches;

public: 
	void add_dist() {
		cin >> feet; 
		cin >> inches;
	}
	void div_dist() {
		 float feetflt = feet + inches / 12;
		 feet = static_cast<int>(feetflt); 
		 inches = (feetflt - feet);
	}
	int feet_output() {
		return feet;

	}
	int inches_output() {
		return inches;
	}
};


int main()
{

	setlocale(0,"");
	Distance mas[SIZE];
	bool flag = true;
	static int i = 0;
	while (flag) {
		cout << "Введите длину (12 3): ";
		mas[i].add_dist();
		
		cout << "Хоитите продолжить? ";
		char reshe = 'Y';
		cin >> reshe;
		if (reshe == 'Y') i++;
		if (reshe == 'N') flag = false;
	}
	float sum_inches = 0;
	int sum_feet = 0;
	for (int j = 0; j <= i; j++) {
		sum_feet += mas[j].feet_output();
		sum_inches += mas[j].inches_output();
	}
	if (sum_inches < 10) { sum_inches = sum_inches / 10;}
	if (sum_inches > 10) { sum_inches = sum_inches / 100;}
	cout << "Среднее значение равно " << (sum_feet + sum_inches) / (i + 1) << endl;











}

