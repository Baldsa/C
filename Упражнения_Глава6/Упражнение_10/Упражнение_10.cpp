#include <iostream>
using namespace std; 

class angle {

private:
    int graduces;
    float minuts;
    char way;
public:
    angle() {}
    angle(int num1, float num2, char ch) : graduces(num1), minuts(num2), way(ch) {}
    void get_cordinates() {
        cout << "введите число градусов, минут и символ направления: ";
        cin >> graduces >> minuts >> way;
    }
    void display() const {

        cout << graduces << '\xB0' << minuts << '\' ' << way << endl;

    }

};


class ship {
private: 
    static int count;
    int number;
    angle latitude;
    angle longitude;
     
public: 
    ship() {count++;number = count; }
    void get() {
        cout << "Введите координаты " << number << " корабля \n"
            << "Широта: "; latitude.get_cordinates();
        cout << "\nДолгота: "; longitude.get_cordinates();
     }
    void display() const {
        cout << "Номер корабля " << number << " его координаты " << "\n Широта "; latitude.display(); cout << "\nДолгота"; longitude.display();
        cout << endl;
        
    
    }


};

int ship::count = 0;



int main()
{
    setlocale(0, "");
    ship one,two,three;
    one.get();
    two.get();
    three.get();
    one.display();
    two.display();
    three.display();

}
