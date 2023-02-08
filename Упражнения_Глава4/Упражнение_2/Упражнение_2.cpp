

#include <iostream>
using namespace std; 

struct point {
    int x;
    int y;
};




int main()
{
    setlocale(LC_ALL, "RU");
    point point1, point2;
    cout << "Кординаты первой точки: ";
    cin >> point1.x >> point1.y; 
    cout << "Кординаты второй точки: ";
    cin >> point2.x >> point2.y;
    cout << "Кординаты третей точки: " << (point1.x + point2.x) << " "
        << (point1.y + point2.y) << endl;




}

