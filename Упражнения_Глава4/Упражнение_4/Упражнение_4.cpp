

#include <iostream>
using namespace std;
#include <iomanip>
// Программа получает инфу о сотрудниках и выводит о них информацию.

struct employee {
    int number; 
    float summary;
};


int main()
{
    setlocale(LC_ALL, "RU");
    employee per1;
    cout << "Введите информацию о первом сотруднике: ";
    cin >> per1.number >> per1.summary;
    employee per2;
    cout << "Введите информацию о втором сотруднике: ";
    cin >> per2.number >> per2.summary;
    employee  per3; 
    cout << "Введите информацию о третьем сотруднике: ";
    cin >> per3.number >> per3.summary;
    cout << "Номер сотруднка" << setw(15) << "Зарплата" << endl
         << per1.number << setw(20) << " " << per1.summary << endl
         << per2.number << setw(20) << " " << per2.summary << endl
         << per3.number << setw(20) << " " << per3.summary << endl;
}

