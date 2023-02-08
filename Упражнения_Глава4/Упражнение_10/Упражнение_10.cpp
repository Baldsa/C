#include <iostream>
using namespace std; 

struct Time {

    int hours;
    int minuts;
    int seconds;

};

// Просто нужно вывести в  том же формате, что и ввели это повторение cout, как и cin
// Так что я нчиего не изменил с 9 упражнения

int main()
{
    setlocale(0, "");
    Time pol_time;
    char ch = ':';
    cout << "Введите время (hh:mm:ss): ";
    cin >> pol_time.hours >> ch >> pol_time.minuts >> ch
        >> pol_time.seconds;
    long totalsec = pol_time.hours * 3600 + pol_time.minuts * 60 + pol_time.seconds;
    cout << "Количесво секудн равно " << totalsec << endl;


}

