#include <iostream>
#include<array>
using namespace std;


class safearray {
private: 
    static const int LIMIT = 10;
    int mas[];


public: 
    void putel(int, int);
    int getel(int);

};

void safearray::putel(int index, int number) {
    if ((index >= 0) && (index < LIMIT)) mas[index] == number;
   
}
int  safearray::getel(int index) {
    if ((index > 0) && (index < 10)) return mas[index];
    
}

int main()
{
    setlocale(0, "");
    safearray sa1;
    int temp = 12345;
    
    sa1.putel(2, temp);
    cout << "Значение по индексу " << 3 << " равно " << sa1.getel(3);

}
