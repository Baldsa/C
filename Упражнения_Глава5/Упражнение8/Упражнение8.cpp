

#include <iostream>
using namespace std;

int swap(int&, int&);


int main()
{
    setlocale(0, "");
    int num1, num2;
    cout << "Введите два числа ";
    cin >> num1 >> num2;
    swap(num1, num2);
    cout << "Числа после функции " << num1 << ' ' << num2 << endl;

}





int swap(int& num1, int& num2) {
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
    return 0;
}