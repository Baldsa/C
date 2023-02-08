
#include <istream>
#include <iostream>
using namespace std;
#include <vector>
#include <string>

using namespace std;


struct date {

    int month;
    int day;
    int year;
};

// Программа для того чтобы пользователь вводил дату (dd/mm/yyyy) в таком формате,
// а потом программа парсит их и потом ввыводит в том же формате

int main()
{
    setlocale(LC_ALL, "RU");
    date date;
    string str;
    vector<string> vec;
    cout << "Введите дату(dd mm yyyy): ";
    while ((getline(cin, str, '/')) && (vec.size() < 3))
    {
        if (vec.size() == 0) {
            if (1 <= stoi(str) <= 31)date.day = stoi(str);
            else cout << "Введен неправильно день" << endl;
        }
        if (vec.size() == 1) { 
            if (1 <= stoi(str) <= 12) date.month = stoi(str); 
            else cout << "Введен неправильно месяц" << endl;       
        }
        if (vec.size() == 2) date.year = stoi(str);
        vec.push_back(str);
    }
    cout << "Вы ввели дату:" << date.day << '/' << date.month
        << '/' << date.year << endl;

}