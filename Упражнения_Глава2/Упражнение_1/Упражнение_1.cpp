#include <iostream>
using namespace std;
#define Fut 7.481

float convert(int gallons) {
    int tmp = gallons;
    float cub_fut = gallons * Fut;
    cout << "Количество кубических футов = " << cub_fut << endl;
    return cub_fut;
}


int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Введите количество галлонов" << endl;
    int gallons;
    cin >> gallons;
    convert(gallons);
    return 0;
}

