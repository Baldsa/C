
#include <iostream>
using namespace std;
#include <iomanip>
#include <conio.h>
enum etype { accountant, laborer, secretary, manager, executive, researcher };

struct date {

    int month;
    int day;
    int year;
};
struct employee {
    int number;
    float summary;
    int numpost;
    string post;
    date date;
};
// Сделать цикл for в котором будет одна переменнная структуры employee и циклом менчть эту одну переменную.
int main()
{
    setlocale(0, "");
    char razdelitel = ' ';
    char data_razdel = '/';
    employee per1;
    
    for (int i = 0; i < 3; i++) {
        cout << "Введите данные i-том сотруднике(Номер, зарплата, должность, дата рождения)";
        cin >> per1.number >> per1.summary
            >> per1.numpost >> per1.date.day >> data_razdel
            >> per1.date.month >> data_razdel >> per1.date.year;
        switch (per1.numpost)
        {
        case 0:
            per1.post = "accountant";
            break;
        case 1:
            per1.post = "laborer";
            break;
        case 2:
            per1.post = "secretary";
            break;
        case 3:
            per1.post = "manager";
            break;
        case 4:
            per1.post = "executive";
            break;
        case 5:
            per1.post = "researcher";
            break;
        }
        
        cout << setiosflags(ios::left) << setw(15) << "Номер сотруднка " << setiosflags(ios::left)
            << setw(14) << "Зарплата " << setiosflags(ios::left) << setw(11) << "Должность "
            << setiosflags(ios::left) << setw(10) << "Дата рождения " << endl;
        cout << setiosflags(ios::left) << setw(16) << per1.number
            << setiosflags(ios::left) << setw(14) << per1.summary <<
            setiosflags(ios::left) << setw(11) << per1.post <<
            setiosflags(ios::left) << per1.date.day << '/'
            << per1.date.month << '/' << per1.date.year << endl;

    }
    }
    
