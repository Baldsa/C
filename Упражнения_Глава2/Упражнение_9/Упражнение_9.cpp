#include <iostream>
#include <string> 
using namespace std;




int main()
{
    setlocale(LC_ALL, "RU");
    int a, b, c, d;
    
    cout << "Введите первую дробь: a b => a/b" << endl; 
    cin >> a >> b;
    cout << "Введите вторая дробь:" << endl;
    cin >> c >> d;
    cout << ((a * d) + (c * b)) << "/" << (b * d) << endl;

}
