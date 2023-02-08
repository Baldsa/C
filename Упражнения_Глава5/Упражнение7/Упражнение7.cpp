#include <iostream>
using namespace std; 

double power(double num, int pow = 2);
double  power(int num, int pow = 2);
double power(float  num, int pow = 2);
double power(char  num, int pow = 2);
double power(long  num, int pow = 2);

int main()
{
    cout << "\nRezul'tat: " << power(3.5, 12);
    cout << "\nRezul'tat: " << power('D', 3);
    cout << "\nRezul'tat: " << power(4, 5);
    cout << "\nRezul'tat: " << power(4, 4);
    cout << "\nRezul'tat: " << power(3.5F, 2);
    return 0;
}

double power(double num, int pow) {
    double num1 = num;
    for (int i = 0; i < pow - 1; i++) {num1 *= num;}                     
    return num1;
}
double power(int num, int pow ) {
    int num1 = num;
    for (int i = 0; i < pow - 1; i++) { num1 *= num; }
    return num1;
}
double power(float num, int pow ) {
    float num1 = num;
    for (int i = 0; i < pow - 1; i++) { num1 *= num; }
    return num1;
}
double power(char num, int pow) {
    char num1 = num;
    for (int i = 0; i < pow - 1; i++) { num1 *= num; }
    return num1;
}
double power(long num, int pow) {
    long  num1 = num;
    for (int i = 0; i < pow - 1; i++) { num1 *= num; }
    return num1;
}
