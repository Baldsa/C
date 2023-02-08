
#include <iostream>
using namespace std;
#include <stdio.h> 


double intpart;

struct Distance {
    int feet;
    float inches;
};

struct Volume {
    Distance lenght;
    Distance widht;
    Distance height;
};



int main()
{
    setlocale(LC_ALL, "RU");
    Volume room; 
    room = { {21,2}, {123,3}, {3, 4} };
    float len = room.lenght.feet + room.lenght.inches/10;
    float wid = room.widht.feet + room.widht.inches / 10;
    float hei = room.height.feet + room.height.inches / 10;
    float V = len * wid * hei;
    int feet = V / 10;
    double inches = modf(V, &intpart);
    
    cout << "Объем помещения = " << feet << " Футов " << inches << " Дюймов" << endl;



}

