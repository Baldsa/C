#include <iostream>
using namespace std; 

class time_1 {
private: 
    int hours;
    int minuts;
    int seconds; 
    char ch = ':';
public:
    time_1() : hours(0), minuts(0), seconds(0) {}
    time_1(int ushours, int usminuts, int usseconds) : hours(ushours), minuts(usminuts), seconds(usseconds) {}
    void plus(time_1 num1, time_1 num2) {
        seconds = num1.seconds + num2.seconds;
        minuts = num1.minuts + num2.minuts;
        hours = num1.hours + num2.hours;
        if (seconds >= 60) { minuts += 1; seconds = seconds - 60; }
        if (minuts >= 60) { hours += 1; minuts = minuts - 60; }
        if (hours >= 24) hours = 0;
    }
    void const display() {
        cout << "Сейчас время " << hours << ch << minuts << ch << seconds << endl;
    }
};




int main()
{
    setlocale(0, "");
    time_1 us{ 12,23,45 };
    time_1 ru{ 16,43,42 };
    time_1 eu;
    eu.plus(us, ru);
    eu.display();





}

