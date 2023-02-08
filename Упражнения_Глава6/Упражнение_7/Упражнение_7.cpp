#include <iostream>
using namespace std; 



class angle {

private:
    int graduces;
    float minuts;
    char way;
public:
    angle(int num1, float num2, char ch) : graduces(num1), minuts(num2), way(ch) {}
    void get_cordinates() {
        cout << "Введите число градусов, минут и символ направления: ";
        cin >> graduces >> minuts >> way;
    }
    void display() const {

        cout << "Координаты введенной точки" << graduces << '\xB0' << minuts << '\' ' << way << endl;

    }

};







int main()
{
    setlocale(0, "");
    char ch = 'Y';
    angle latitude(149, 34.8F, 'E'), longitude(17, 31.5F, 'S');
    cout << "Широта острова на Таити: "; longitude.display();
    cout << "Долгота острова на Таити: "; latitude.display();
    while (ch != 'N')
    {
        cout << "Введите новую широту:"; longitude.get_cordinates();
        cout << "Введите новую долготу:"; latitude.get_cordinates();
        cout << "Вы ввели следующие координаты точки в морской навигации:" << endl;
        cout << "Широта составила: "; longitude.display();
        cout << "Долгота составила: "; latitude.display();
        cout << "Будете вводить ледующию точку ? (Y / N)";
        cin >> ch;
        cout << endl;
        
    }
}
