

#include <iostream>
using namespace std;

struct phone
{
    int code_city;
    int number_station;
    int number_person;

};


int main()
{
    setlocale(LC_ALL, "RU");
    phone phone1;
    phone phone2;
    phone1 = { 321, 213, 2131};
    cin >> phone2.code_city >> phone2.number_station >> phone2.number_person;
    cout << "Мой номер (" << phone1.code_city << ") " << phone1.number_station
        << "-" << phone1.number_person << endl; 
    cout << "Ваш номер (" << phone2.code_city << ") " << phone2.number_station
        << "-" << phone2.number_person << endl;

}

