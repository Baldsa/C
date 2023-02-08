#include <iostream>
#include <iomanip>
using namespace std;
#define funt 1.487 
#define frank 0.172 
#define mark 0.584 
#define japan_qein 0.00955


float convertor(int dollars) {
    int dol = dollars;
    float sterlings = dol * funt;
    float franks = dol * frank;
    float marks = dol * mark;
    float japan = dol * japan_qein;
    cout << setw(15) << "Фунты стерлинга = " << setw(8) << sterlings << endl
        << "Франки = " << setw(8) << franks << endl
        << setw(15) << "Немецкие марки = " << setw(8) << marks << endl
        << setw(15) << "Японские йены = " << setw(8) << japan << endl;
    return 0;
 }

int main() {
    setlocale(LC_ALL, "RU");
    int dollars;
    cout << "Введите количество долларов" << endl; 
    cin >> dollars; 
    convertor(dollars);
}

