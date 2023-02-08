#include <iostream>
#include <string>
using namespace std; 


int convertor(string degrace) {
    string Celcius = degrace;
    if (Celcius[Celcius.size() - 1] == 'C') {
        Celcius = Celcius.erase(Celcius.size() - 1);
        int Celsius = stoi(Celcius);
        float Farengate = Celsius * 9 / 5 + 32;
        cout << "Градусов Фаренгейта = " << Farengate << endl;
    }
    else
    {
        Celcius = Celcius.erase(Celcius.size() - 1);
        int farengate = stoi(Celcius);
        float Celsius = (farengate - 32) * 5 / 9;
        cout << "Градусов Цельсия = " << Celsius << endl;   
    }
    return 0;

 }
// Конвертор из Цельсия в Фарнегейты и наоборот
int main() 
{
    setlocale(LC_ALL, "RU");
    cout << "Количество градусов(C - Цельсия, F - Фаренгейт)" << endl;
    string degrace;
    //char what;
    cin >> degrace;
    //cout << "C - Цельсия, F - Фаренгейт" << endl;
    //cin >> what;
    convertor(degrace);

}

