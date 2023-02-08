

#include <iostream>
using namespace std; 

struct Distance {

	int feet; 
	int inches;


};
Distance comaare(Distance, Distance);

int main()
{
	Distance d1, d2, d3;
	setlocale(0, "");
	cout << "Введите значения первй комнаты ";
	cin >> d1.feet >> d1.inches;
	cout << "Введите значения первй комнаты ";
	cin >> d2.feet >> d2.inches;
	d3 = comaare(d1, d2);
	if (d1.feet == d3.feet && d1.inches == d3.inches){
		cout << "Наибольшая комната 1";
	}
	else
	{
		cout << "Наибольшая комната 2";
	}
}

Distance comaare(Distance room1, Distance room2) {
	int rooom1 = room1.feet * 12 + room1.inches;
	int rooom2 = room2.feet * 12 + room2.inches;
	if (rooom1 > rooom2)
		return room1;
	else
		return room2;
}
