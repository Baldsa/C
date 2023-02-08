#include <iostream>
using namespace std;


class fraction {
private:
    int numerator;
    int denominator;
    char ch = '/';
    int integer_part ;
public:
    fraction() : numerator(0), denominator(0), integer_part(0) {}
    void getnumerator()
    {
        cout << "Введите числитель из знаменатель ";
        cin >> numerator >> ch >> denominator;
    }
    
    void add(fraction num1, fraction num2) {
        if (num1.denominator == num2.denominator) {
            numerator = num1.numerator + num2.numerator;
            denominator = num1.denominator = num2.denominator;
            if ((numerator % denominator) == 0) {
                integer_part = numerator / denominator;
            }
        }
        else
        {
            numerator = num1.numerator * num2.denominator + num2.numerator * num1.denominator;
            denominator = num2.denominator * num1.denominator;
            if ((numerator % denominator) == 0) {
                integer_part = numerator / denominator;
            }
        }
    }
    void multiply(fraction num1, fraction num2) {
        numerator = num1.numerator * num2.numerator;
        denominator = num1.denominator * num2.denominator;
        if ((numerator % denominator) == 0) {
            integer_part = numerator / denominator;
        }
    }
    void Division(fraction num1, fraction num2) {
        numerator = num1.numerator * num2.denominator;
        denominator = num1.denominator * num2.numerator;    
        if ((numerator % denominator) == 0) {
            integer_part = numerator / denominator;
        }
    }
    void display_result()
    {
        if (integer_part != 0){
        
            cout << "Результат = " << integer_part << endl;
        }
        else
        {
            cout << "Результат = " << numerator << ch << denominator << endl;
        }
    }
};


int main()
{
    setlocale(0, ""); 
    fraction num1, num2, num3; 
    num1.getnumerator();
    num2.getnumerator();
    num3.add(num1, num2);
    num3.display_result();
}
