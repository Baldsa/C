

#include <iostream>
using namespace std; 


struct Time {

    int hours; 
    int minuts;     
    int seconds;

};



int main()
{
    setlocale(0, "");
    Time pol_time;
    char ch = '/';
    cout << "Введите время (hh/mm/ss): ";
    cin >> pol_time.hours >> ch >> pol_time.minuts >> ch
        >> pol_time.seconds; 
    long totalsec = pol_time.hours * 3600 + pol_time.minuts * 60 + pol_time.seconds;

    cout << "Количесво секудн равно " << totalsec << endl;




}

