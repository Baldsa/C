
#include <iostream>
using namespace std;

float circarea(float r) {

    return 3.14159265359 * pow(r, 2);

}



int main()
{
    setlocale(0, "");
    float r;
    cout << "Введите радиус ";
    cin >> r;
    cout << "Площадь круга равна " << circarea(r) << endl;
}

