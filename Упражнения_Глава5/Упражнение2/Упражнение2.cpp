

#include <iostream>
using namespace std;
double power(double num, int pow = 2);

double power(const double num, int pow) {
    double num1 = num;
    for (int i = 0; i < pow - 1; i++) {
 
            num1 *= num;
        
    
    }
    return num1;
}




int main()
{
    setlocale(0, "");
    double num;
    int pow;
    cout << "Введите число ";
    cin >> num;
    cout << "Введите степень ";
    cin >> pow; 
    cout << "Число " << num << " в сетпени " << pow << " = "
        << power(num, pow) << endl;
}

