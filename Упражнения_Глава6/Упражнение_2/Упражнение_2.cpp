#include <iostream>
using namespace std; 



class tollBoth {
private: 
    unsigned int counter; 
    double revenue; 

public:
    tollBoth() : counter(0), revenue(0) {}
    void payingcar() {
        counter += 1;
        revenue += 0.5;
    }
    void nopaycar() {
        counter += 1;   
    }
    void const display() {
        cout << "Количество машин = " << counter << " выручка составила " << revenue << endl;
    }

};




int main()
{
    setlocale(0, "");
    tollBoth car1;
    cout << "Ввдите значение для имитации добросвессного водителя(1) и нет(0) ";
    int varibale;
    cin >> varibale; 
    while (varibale != 3) {
        if (varibale == 0) car1.payingcar();
        if (varibale == 1) car1.nopaycar();
        if (varibale == 2) car1.display();
        cout << "Ввдите значение для имитации добросвессного водителя(1) и нет(0) и (3) для выхода ";
        if (varibale == 3) exit;
        cin >> varibale;
    }
    
}

